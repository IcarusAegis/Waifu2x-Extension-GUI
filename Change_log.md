# Change log
## [v0.281-beta](https://github.com/AaronFeng753/Waifu2x-Extension-GUI/releases/tag/v0.281-beta)
#### Change log:
- New feature: [Files List] supports deselect
- Interface Beautification
- Adjust interface layout
- Improve Simplified Chinese support
- Fix bug: GIF frames could not be arranged properly in some cases
- Fix bug: In some cases, the thread will be automatically closed in advance and the task cannot be completed
- Fix bug: In some cases, the program cannot exit completely and will stay in the background to execute an infinite loop
- Fix bug: When there is no Java runtime environment in the system, calling Anime4k may cause the software to enter an infinite loop
---
## [v0.25-beta](https://github.com/AaronFeng753/Waifu2x-Extension-GUI/releases/tag/v0.25-beta)
#### Change log:
- New feature: Read screen resolution and set as default custom resolution value when first started
- New feature: When loading File List, automatically output items with status [Failed] in Textbrowser
- Update FFmpeg (4.2.2)
- Fix bug: In some special cases, automatic check for updates will falsely report the existence of a new version
- Fix bug: Automatic shutdown of computer could not be performed normally
- Fixed bug: [File Count] cannot be displayed normally after language switching
- Improve Simplified Chinese language support
---
## [v0.21-beta](https://github.com/AaronFeng753/Waifu2x-Extension-GUI/releases/tag/v0.21-beta)
#### Change log:
- New feature: [Completed number of files/Total number of files] is displayed on the left side of the progress bar.
- New feature: Added setting options to control whether to automatically check for updates at startup (It is `not recommended` to turn off automatic updates)
- New feature: The total number of files is displayed below the file list.
- New feature: Save/Read file list
- New feature: Automatically save the file list before automatically shutting down the computer,  you can manually load the file list to check the file processing status after the next software startup
- New feature: pop-up window prompt before auto shutdown
- Improve Simplified Chinese language support
- Select the readme to open based on the current language
- Before processing a file, check if it exists
- Fix bug: After saving the settings, the [Image Style] settings that were saved cannot be read normally
- Fix bug: After removing a single row, the custom resolution settings of all remaining rows will be cleared
- Fix bug: When there are files with the same file name and different extensions in the file list, if multi-threading is enabled, it will cause read and write conflicts.
- Fix bug: The problem that the new version download page cannot be opened normally after detecting the new version automatically.
---
## [v0.12-beta](https://github.com/AaronFeng753/Waifu2x-Extension-GUI/releases/tag/v0.12-beta)
#### Change log:
- NEW Feature: Check for updates automatically.
- Fix bug: GIF and video cannot read the scale ratio setting normally.
- Fix bug: When processing videos and gif files, if an error occurs, it will cause thread management problems.
---
## [v0.11-beta](https://github.com/AaronFeng753/Waifu2x-Extension-GUI/releases/tag/v0.11-beta)
#### Change log:
- NEW Feature: Customize the resolution of image, GIF and video output. (At the request of an anonymous donor.🧐)
- NEW Feature: Multi-language.(Add Simplified Chinese.)(At the request of an anonymous donor.🧐)
- NEW Feature: Support to save the current settings, automatically restore the last saved settings when starting the software.
- NEW Feature: Switch the display status of setting options. (Hide / Show)
- NEW Feature: Switch the display status of [Input]. (Hide / Show)
- NEW Feature: Prompt when misoperation.
- NEW Feature: Automatically scroll to the bottom after changing the font size of Textbrowser.
- NEW Feature: Textbrowser automatically slides to the bottom after outputting new content
- NEW Feature: Tableview automatically adjusts sieze based on content
- NEW Feature: Check available GPU and set GPU ID.
- Improve tableview selection logic. When one tableview is selected, the other two are automatically unselected.
- Optimize the tableview display logic. After inputting the file, only change the display state of the corresponding tableview.
- Remove redundant code
- Fix bug: [Remove item] will cause the program to crash when the file is finished and [Re-process finished files] is not enabled.
- Fix bug: [video_gif_info.exe] Chinese characters cannot be read normally
- Fix bug: [Compatibility check] button is not automatically enabled after all files have been processed.
---
## [v0.01-beta](https://github.com/AaronFeng753/Waifu2x-Extension-GUI/releases/tag/v0.01-beta)
#### Change log:
- First release.
