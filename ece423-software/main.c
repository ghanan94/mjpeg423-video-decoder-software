/*
 * "Hello World" example.
 *
 * This example prints 'Hello from Nios II' to the STDOUT stream. It runs on
 * the Nios II 'standard', 'full_featured', 'fast', and 'low_cost' example
 * designs. It runs with or without the MicroC/OS-II RTOS and requires a STDOUT
 * device in your system's hardware.
 * The memory footprint of this hosted application is ~69 kbytes by default
 * using the standard reference design.
 *
 * For a reduced footprint version of this template, and an explanation of how
 * to reduce the memory footprint for a given application, see the
 * "small_hello_world" template.
 *
 */


#define NULL_COLORCONV

#include <stdio.h>
#include <system.h>
#include <stdint.h>

#include "config.h"
#include "utils.h"

#include "playback.h"
#include "key_controls.h"
#include "libs/ece423_sd/ece423_sd.h"

#define PLAY_PAUSE_VIDEO_BUTTON		(1)
#define LOAD_NEXT_VIDEO_BUTTON		(2)
#define FAST_FORWARD_VIDEO_BUTTON	(4)
#define REWIND_VIDEO_BUTTON			(8)

static void doWork (FAT_HANDLE hFAT, FAT_BROWSE_HANDLE* FatBrowseHandle, ece423_video_display *display) {
	FILE_CONTEXT fileContext;
	int retVal;
	int keyPressed;
	bool fileFound;
	bool currentlyPlaying;

	//
	// Main loop
	//
	// Steps:
	//   1) Find next file
	//   2) Handle button presses and play video
	//   3) Close video if needed
	//   4) Repeat (back to 1)
	//
	while (1) {
		//
		// Reset fileFound flag to 0 (false -- not found)
		//
		fileFound = 0;

		//
		// Try to find the next available MPG file
		//
		DBG_PRINT("Finding next file to play\n");
		while (Fat_FileBrowseNext(FatBrowseHandle, &fileContext)) {
			//
			// Check if the file is a .MPG file
			//
			if (Fat_CheckExtension(&fileContext, ".MPG")) {
				DBG_PRINT("Found an MPG files!\n");
				fileFound = 1;
				break;
			}
		}

		// Assume that if file not found
		// we are at the end of the directory
		//
		// TODO: Don't make this assumption
		if (!fileFound) {
			// End of FAT system, so loop back to beginning
			DBG_PRINT("Reached end of file list; Re-Begin File browse\n");
			retVal = Fat_FileBrowseBegin(hFAT, FatBrowseHandle);
			assert(retVal, "Fat_FileBrowseBegin failed!");
			continue;
		}

		assert(fileFound, "No MPEG file found\n");

		DBG_PRINT("File Found; File Name is: %s, file size %d\n", Fat_GetFileName(&fileContext),
				fileContext.FileSize);

		//
		// Load video related info
		//
		DBG_PRINT("Loading video...\n");
		loadVideo(hFAT, Fat_GetFileName(&fileContext));

		//
		// Preview the video
		//
		previewVideo(display);

		//
		// Play video and handle
		// push button presses
		//
		while (1) {
			printf("\n\n\nPress Push Button 0 to play video\n");

			keyPressed = waitForButtonPress();
			DBG_PRINT("Key pressed %d\n", keyPressed);

			currentlyPlaying = isVideoPlaying();

			if (keyPressed & PLAY_PAUSE_VIDEO_BUTTON) {\
				DBG_PRINT("Play/Pause button pressed\n");
				DBG_PRINT("Currently %s, Going to %s\n",
						currentlyPlaying ? "Playing" : "Paused",
						currentlyPlaying ? "Pause" : "Play");

				if (currentlyPlaying)
				{
					// Currently Playing so go to beginning of this loop to wait for
					// Push button 0 to be pressed.
					// If not currently playing (paused) continue on to play
					pauseVideo();
					continue;
				}
			} else if (keyPressed & LOAD_NEXT_VIDEO_BUTTON) {
				DBG_PRINT("Load next video button pressed\n");

				break;
			} else if (keyPressed & FAST_FORWARD_VIDEO_BUTTON) {
				DBG_PRINT("Fast forward button pressed\n");

				retVal = fastforwardVideo();

				if (!retVal) {
					//
					// Close to the end of the video
					// Just stop the video
					//
					pauseVideo();
					continue;
				}

				// Preview the video
				previewVideo(display);

				if (!currentlyPlaying) {
					// If not currently playing, then go back to
					// waiting for user input
					continue;
				}
			} else if (keyPressed & REWIND_VIDEO_BUTTON) {
				DBG_PRINT("Rewind button pressed\n");

				rewindVideo();
				previewVideo(display);

				if (!currentlyPlaying) {
					// If not currently playing, then go back to
					// waiting for user input
					continue;
				}
			}

			DBG_PRINT("Playing video\n")
			playVideo(display, &buttonHasBeenPressed); // Can stop because video ended OR

			DBG_PRINT("Video stopped\n");
		}

		closeVideo();
	}
}

int main() {
	printf("Application Starting...\n");

	// File System
	FAT_HANDLE hFAT;
	FAT_BROWSE_HANDLE FatBrowseHandle;
	int retVal;

	//
	// Init the SD
	//
	retVal = SDLIB_Init(SD_CONT_BASE);
	assert(retVal, "SDLIB_Init failed!")

	//
	// Mount the FAT file system
	//
	hFAT = Fat_Mount();
	assert(hFAT, "Fat_Mount failed!")

	//
	// Get handle to browse FAT file system
	//
	retVal = Fat_FileBrowseBegin(hFAT, &FatBrowseHandle);
	assert(retVal, "Fat_FileBrowseBegin failed!")

	//
	// Init video display using ece423 video api
	//
	ece423_video_display* display = ece423_video_display_init(
		VIDEO_DMA_CSR_NAME, DISPLAY_HEIGHT, DISPLAY_WIDTH, NUM_OUTPUT_BUFFERS);
	assert(display, "Video display init failed!");

	//
	// Init Keypress interrupts
	//
	retVal = initKeyIrq();
	assert(display, "Failed to init keys");

	DBG_PRINT("Initialization complete!\n");

	doWork(hFAT, &FatBrowseHandle, display);

	return 0;
}
