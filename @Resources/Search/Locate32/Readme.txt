Locate32 v3.1 RC3l build 10.8220
Copyright (C) 1997-2010 Janne Huttunen <janne.huttunen@locate32.net>
***************************************************************

Contains
========

	0. About this release
	1. Using Locate
	2. License
	3. Requirements
	4. Installation and uninstallation
	5. Problems with the help file
	6. Acknowledgements
	7. Release notes

0. About this release

If you found a bug, please use Locate32 flyspray (http://www.locate32.net/flyspray) to report it. 
Please check the existing reports first to see if someone else has already reported the same problem. 
Try to add a detailed description about what you have done and how that the crash/bug can be repeated
(e.g., did you use locate32.exe, locate.exe, or updtdb32.exe, your operating system, the exact strings 
what you have used for searching, exact error messages, what happened and what you expected to happen
(this is not always clear)).




1. Using Locate

Locate is a program that can be used to find files from your hard disks. Before you
can use program you must create a database containing file names. To create a database, 
use choose Update databases in locate32.exe or run updtdb32.exe. Check Databases tab in 
Settings dialog, for example, to index more drives than local drives.

For more help run updtdb32 -h or locate -h. 


2. License

The program is distributed under the terms of the "BSD" licence, as specified 
below. 

THE "BSD" LICENCE
-----------------

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

    * Redistributions of source code must retain the above copyright notice,
      this list of conditions and the following disclaimer.

    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.

    * The name author may be used to endorse or
      promote products derived from this software without specific prior
      written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.



3. Requirements

Program requires Windows 98, Windows NT 4.0 or later. 


To retrieve image dimensions (uses imghnd.dll), GDI+ must be installed (by default it is 
included only to Windows XP or later). To install GDI+ to your system, download a correct patch 
from microsoft.com.


If GDI+ is not installed, "gdiplus.dll file does not found" error message may appear when imghnd.dll 
is tried to be loaded. To prevent this set registry key "Load imagehandler" to 0 (dword value) 
in HKEY_CURRENT_USER\Software\Update\Locate32.





4. Installation and uninstallation

To install this program execute the installer (locate32-XXX.exe packages) or extract 
file into some directory (XXX.zip packages). To uninstall the program, open Control Panel and 
select Add/Remove Programs. Select Locate and press Add/Remove button. 


You can modify installation routine as follows. The installation program has the 
following command line arguments:
	-w		don't show wizard
	-q		don't show installation progress dialogs
	-d file 	read installation options from file

Options "-w" and "-q" combined together does not show any dialogs or message boxes, unless
an error occur. For "-d", a file is a text file, for example, of the form:

[VARIABLES]
#Destination path
DESTINATIONPATH=%p\Locate32
# Icon group
ICONGROUP=Locate
# User's own icon group or all user
ICONUSERGROUP=FALSE
# Don't show frame
SHOWFRAME=FALSE
# Check boxes
DESKTOPICONS=FALSE
QUICKBARICONS=TRUE
REGENTRIES=TRUE
OPENREADME=FALSE
EXECUTELOCATE32=FALSE
EXECUTEUPDTDB32=FALSE
RUNATSTARTUP=FALSE
UPDATEATSTARTUP=FALSE

[SELECTIONS]
LOCATE32=TRUE
LOCATE=TRUE
UPDTDB32=TRUE
LANEN=TRUE


5. Problems with the help file

Users have been notified that the chm help file cannot be viewed on Windows systems. 
This problem is probable related on the Windows security update 896358 which may block
the chm file. To unblock the help file, run Windows Explorer and choose Locate32's directory, 
right-click on locate32.chm file, select Properties from the popup menu, click on the Unblock 
button below the Advanced button on the General page and click Apply button. 

For more information, see:
http://support.microsoft.com/kb/902225/



6. Acknowledgements

Regular expression support is provided by the PCRE (Perl Compatible Regular 
Expressions) library package, which is an open source software, written by Philip Hazel, 
and copyright by the University of Cambridge, England. PCRE is available in: 
ftp://ftp.csx.cam.ac.uk/pub/software/programming/pcre/

MD5 sums (RFC 1321, http://userpages.umbc.edu/~mabzug1/cs/md5/md5.html) are computed using 
L. Peter Deutsch's (ghost@aladdin.com) implementation of MD5 Algorithm.

Program uses Martin Pool's strnatcasecmp and strnatcmp functions (http://sourcefrog.net/projects/natsort/) to 
compare items in the results list using natural ordering when an alternative funtion from shell is not available 
(e.g. in Win2k) or if the search is case sensitive.

The installation program uses bzip2 version 1.0.3 by Julian Seward (jseward@acm.org).

The locate logo shown in the About dialog is made by Fredrik Bränström. The high color 
icons are made by Hexaae. Thank you both!




7. Release notes


The list of changes between releases:

3.1.10.8220 (preRC4):
-	Loading comments from descript.ion file
- 	Tooltips shows more informatin (database, title, author, description, comments, file and product version)
- 	Templates for "File/Save Results" (see some example template file in templates directory)
- 	"Save data to clipboard" (Special submenu): same options to format data as with Save Results
- 	It is possible to use keyboard shortcuts to open specifig tab in the settings dialog
- 	It is possible to open context menu for parent folder (a new option for "Open context menu"-subaction). 
	This is not yet assigned by default, so go to "View / Select details" or keyboard shortcut settings to assign it.
-	Slashes '/' given in directory names are replaces with back slashes '\' (e.g. "Named:" and 
	"Look in:" fields and in parameters of locate.exe)
- 	Added Stop button to the update tooltip
- 	Added "Update title bar when executing search" option (Advanced settings) for instant searching 
-	Added "Enable shell extension fix" option to Advanced settings. Can be tryed if unexpected crashes occur
- 	Added new command line arguments for Locate32.exe: '-nf' clears "Named:" field, '-nt' sets 
	"Type:" to "(no extension)" ('-t ""' can new be used to clear "Type" field), and '-P0', 
	'-P1', ... can be used to choose 'Everywhere' in 'Look in' (see the help file for more information).
-	Added "Update databases of selected files" to Special menu
- 	New icons (thanks to Hexaae) and loading some icons from shell32.dll and imageres.dll
-	Fixed: locate.exe now understands, say, -t "exe com txt"
- 	Fixed: "Open Containing folder" and "Special"-menu were missing in simple File MenuCommand
- 	Fixed: problem with filesizes over 4GB in minimum/maximum when bytes are used
- 	Fixed: Up and Down buttons in Save Results
- 	Fixed: "Add Folder" button in database options allows now to specify computers
- 	Fixed: error related to PCRE and UTF8 when searching folder names
- 	Fixed: date format errors
- 	Fixed: applications hangs if "Browse" pressed several times
-	Fixed: locate.exe output encoding wrong with some Unicode characters
- 	Fixed: "updtdb32.exe -d database.dbs" updating network share containing '$'
-	Fixed: handling files before 1.1.1980 was arbitrary
-	Some other fixes and changes

3.1.8.9210 (RC3):
-	Options menu renamed to Tools and "Delete Private data" feature added
- 	Added a notification message when language is changed, language settings tab shows version for translations
- 	Stop button enabled with search while typing
- 	Preliminary support for template files in "Save Results" (see templates directory)
- 	Improved error messages in status bar (including "Search while typing")
-	Fixed: when Avant Browser is used as Web Browser, "Open" in context menu do nothing
-	Fixed: may work with Windows 98 and NT 4 
- 	Fixed: renaming failed with unicode files
-	Fixed (locate.exe): '-p' argument allows now '..' in directory name

3.1.8.8030 (RC2):
- 	Added a command line argument "-V" to select list view move
-	Added possiblity temporally use selected databases with 
	"Find using databases" (not only one time)
-	"Copy MD5 sums to clipboard" added to Special menu (under File)
-	Fixed: if comma or semicolor was given in Extensions field, programs was hanged/crashed
-	Fixed: command line argument "-U" caused program to crash
-	Fixed: incorrect icons were shown for drives
-	If directry contains an exe file and subdirectory wiht the same name, the exe file was
	executed when directory was double-clicked

3.1.8.7200 (RC1):
-	Wildcards * and ? are allowed in extensions
-	Possible to save results using Unicode (UTF-16) or UTF-8 character sets
-	If several directories are given in "Look In:" (or the given directory contains ';'), selecting directory
	using Browse button won't replace the directories in "Look In:" but adds the selected directory to end
- 	For the command in "Use another program to open directories", %f added to mean the selected file (e.g., 
	can be used with Total Commander so that the selected file is also selected in TC when "Open containing folder" is chosen. 
-	New option "Prevent moving tooltips (use if tooltips steal focus)" in Advanced settings (see the help file for meaning)
- 	Fixed: searches failed if file name has uppercase characters
-	Some other minor improvements and fixes (error messages, ...)

3.1.8.6150:
-	Possible to use minus '-' in "Extensions:" and "Look In:" fields to exclude extensions and directories in searches 
	(e.g. "-tmp -log" and "-C:\Temp")
-	Possible to sort files in the results list such that digits in file names are considered as numbers (natural ordering). 
	Ordering method can be changed in Advanced settings (natural ordering is default from now on)
-	Possible to search option in Advanced settings 
-	Extension column for the results list
-	"Drive or directory "XXX' is unavailable ..." error message asks if you want to remove the directory from 
	database settings so that it won't be used in future searches
- 	Fixed: if directories had similar names, files in some directories of these directories may have not been not returned

3.1.8.5260:
-	New options in database settings -> Advanced: "Exclude only the content of directory (directory 
	itself will be included)". 
-	Close button for the update status toolip
-	Improvements to the help file: options in keyboard shortcuts and Select details dialog
- 	Added new "variables" (like %f and %e) for "Execute Command" action 
-	Some bug fixes

3.1.8.4270:
- 	New options in Advanced settings: "Simple File menu (no shell context menu items)" 
	(Miscellaneous settings) and "Search if field is changed by command line or by 
	shell menu" (Search as you type).
- 	Fixed: problems with keyboard shortcuts
-	Fixed: typing unicode characters
-	Fixed: when Locate32 is set to execute a file when it's clicked, drag and dropping
	also opened the dropped file
-	Some other fixes

3.1.8.3260:
-	Thumbnails: the results list has two new modes "Large Icons" and "Extra Large Icons" 
	(previous "Large Icons" mode has been renamed to "Medium Icons"). These modes shown 
	images as a thumbnails. Thumbnails are also shown in "Medium Icons" mode if 
	"Show thumbnails also in "Medium Icons" mode" option in Advanced settins is enabled.
	The sizes of "Large Icons" and "Extra Large Icons" modes can be changed in Advanced
	settings.
-	Possible to choose AND mode for default ("Use AND mode as a default" option in 
	Advanced settings). Use | to switch back to OR mode (e.g. "cat|dog")
-	An option for scheduled updates: Delay in seconds before starting updates at startup:
-	Fixed: change color and change font buttons work again, so does Help button in
	the Database options dialog. 
	

3.1.8.3220:
-	Fixed: incompatibility issue with SuperCopier2
- 	Fixed: Alt+N and Alt+T also added 'N' and 'T' to "Named:" and "Type:" field
- 	Fixed: track file system changes (for the results list) will skip ntuser.dat.log file 
	(reduced significantly CPU usage )
- 	Fixed: the dialog icon was not visible always
- 	Changed: update status tooltip will show mapped name (if given)


3.1.8.3090:
-	Windows search: protocol support: possible to use Locate32 as a default desktop search application
	(requires Vista SP1). See README.txt in regs folder in the zip archive for more information.
-	New option (Advanced settings): "If extension is given, file name should match to the extension"
- 	New option (Advanced settings): "Ask confirmatioon when "Update databases" is chosen"
-	Possible to specify icon for the main dialog (a new option in Advanced settings)
-	Fixed: icons glown when "Find as you type is used"
-	Fixed: if Locate32 dialog was minimized when program is closed, the dialog is hidden at startup
-	Some other fixes

3.1.8.2240:
-	Support for junctions and symbolic links. Junctions and symbolic links referring to directories 
	are not scanned by default (use "&Scan directories which are junctions or symbolic links" option 
	in database settings to scan such directories).
-	New option in Advanced settings: "Avoid to access files when reading icons". If this option
	is enabled, icons are created based on given file extension and attributes instead of reading actual
	file. Icons are also read this way if "Disable updating (file information from database)" is chosen 
	(even if "Use Simple icons" is not used).
-	New options to "Pressed when:" list in the keyboard shortcuts: ´""Find as you type" is active" and
	""Find as you type" is not active".
-	Some fixes
	

3.1.8.2210:
-	New option for "Find as you type": "Required characters in a search term until searching:"
-	New option in Advanced settings: "Show column headers in all view modes" (Vista only)
-	New feature: if you hold Ctrl down when clicking "Replace spaces with asterisks" field,
	you can specify which characters are replaced
-	Some other fixes and changes

3.1.8.2160:
-	Improvements to "Find as you type" (previously "Search while typing)": Possible to set delay for search while typing
	and option to change the focus to the result list when Up or Down key is pressed
- 	New option in Advanced settings: If asterisks given, search as if "Match whole name" is enabled
-	Improvements to the help file: If F1 or '?' is pressed (in the settings), the help file 
	file is opened from the right position. Options in Advanced settings are also described. 
-	Several other minor changes

3.1.8.2111:
-	Search while typing (enable "Enable while typing" option in Advanced settings)
-	A database file name can contain %locatedir% which means the directory to which
	Locate32 is installed (maybe be handy if installed on USB memory stick which drive 
	letter may change)
-	Some minor fixes

3.0.8.1200:
-	Added "Last update" column to Databases tab in the settings dialog
-	When Locate32 is searching file at the same time when a database file is going to
	be written, writing is delayed until searching is done. 
-	The range for "Locate dialog transparency" and "Transparency" (tooltips) is now 0-100.
-	Fixed: "searching in file" text when ANSI codepage is used in databases.
-	Fixed: Locate32 dialog hanged when first line in lookin field is UNC path to offline server
-	Fixed: freezing when "Find now" is pressed at the same time when
	database is written

3.0.7.12310:
-	Improved parsing of Include/Exclude files pattern
-	Fixed: background monitoring for the result list caused some problems
-	Fixed: other fixes (crashes etc...)

3.0.7.12260:
-	The help file: corrected typographical errors (thanks to Elijah Koziev), new content and 
	other improvements
-	Fixed: updating result list items was suddenly stopped
-	Fixed: lots of ???? marks in translations using cyrillic or other similar alphabets 

3.0.7.12160:
-	Added "Include directories pattern" to Advanced database settings.
- 	Fixed: locate.exe didn't work (again)
-	Fixed: argument '-U' didn't work
-	Fixed problems with database settings export/import
-	Several other fixes

3.0.7.11250:
-	Added "Include files pattern" to Advanced database settings.
-	Fixed: if Locate32 dialog is maximized, the dialog will be restored if locate32.exe was executed using 
	some command line argument.
-	Fixed: command line arguments '-P' and '-p' works now with computer name (e.g., "locate32 -P\\server")

3.0.7.11040:
-	Fixed: some command line arguments for Locate32 didn't work
-	Changed: renaming files using Windows style renaming is now cancelled if whole name is removed


3.0.7.9220:
- 	Fixed: locate.exe did not work
-	Fixed: updating did loose GDI object and caused OS to hang
-	Fixed: sorting commandline argument (-ld) didn't work
- 	Possible to enable control at startup by using command line arguments (locate32 -Ax)


3.0.7.8190:
-	Fixed: When result files are executed, Locate uses the directory in which the file is 
	as the directory directory
-	Fixed: excluded file pattern (in database settigs) takes into account files files



3.0.7.7010:
-	New option in Advanced settings: Use space as a separator for searches. If this option
	is enabled, you can use space as separator. 
-	New option in Advanced settings: Do not show system tray icon
-	Fixed: Start menu appeared when Win+F key is pressed so that Win is released before F (the solution
	is "Send a key release event before Win key is handled (use with Win+F)"-option in the Advanced dialog 
	of the Keyboard settings, enable this option or reset Shortcuts). 
-	Fixed: enable checkbox didn't work in the database settings tab



3.0.7.6170:
-	Help file improved.
-	Fixed: Remove presets didn't work.
-	Fixed: the result list lost focus if application is changed when file name was edited.
-	Fixed: if search from directories "C:\Foo" and "D:\bar", files from "C:\bar" was 
	also returned.

3.0.7.6030
-	Compressed (C) and encrypted (E) attributes are shown in attributes column
- 	Improvements to help system: new actions for keyboard shortcuts (Show Help for Item, 
	Close Help, Show Topics, Show Index, Table of Contents, Search). To get F1 key working 
	as usually, reset keyboard shortcuts or assign "Show Help for Item" action for F1 key.
	F1 in menu will open a help page for menu item. Anyway, the help file is still quite 
	plain so there is help topics for only few items.
-	About box is fixed.	



3.0.7.5270:
-	Preliminary help file.
-	Logical operations + (specified string must exists in name) and - (specified string must not 
	exists in name). Note that you should enable "Allow logical operations (+ and -)" option in Advanced 
	settings.
-	Fixed: export database setting to a database didn't work with databases which uses unicode 
	character set. Furthermore, this feature also copies the content of database 

3.0.7.5130:
-	Changed behaviour: *.ext will search only files with extension ext although 
	"Match whole name" is not chosen (not ext* as before)
-	New actions in keyboard shortcuts: Stop locating or close dialog, Select N'th file, 
	Execute N'th file
-	By default (after installation or when Reset shortcut is chosen), Ctrl+N is associated
	with Activate Named: field (will also activate Name & Location tab), Ctrl+§ is associated 
	with Activate Result list, ESC is accosiated with Stop locating or close dialog and F3 
	is associated with Show dialog and path from explorer
-	Some minor fixes
 

3.0.7.5060:
- 	New option: "Do not save list items in "Named", "Type" and "Look In" combos
-	Fixed: empty tooltip appeared when locate32 was ran with -U argument
-	Fixed: "Don't show deleted files" option didn't work

3.0.7.4220:
-	Sorting improved, an option for not reading information from files while sorting 
	(except that information which cannot be found from database). 
- 	A new option: "Do not resolve icon for local drives"
 
3.0.7.4090:
-	Default database location changed! Now databases are, by default, 
	in X:\Documents and Settings\USERNAME\Application Data\Locate32
-	Fixed: update tooltip location with multiple monitors
-	Fixed: dates were not shown correctly in Autoupdate list. 
-	Some other fixes

3.0.7.3250:
-	For each drive and directory which are included into a database, you 
	can specify a name which is used in the database (e.g. C: drive can be 
	called WINDOWS etc.). This makes possible to use same databases in several 
	computers, or when you have several operation systems and each OS has different 
	drive order. 
-	Several minor fixes and changes

3.0.7.2110:
-	"Show dialog and path from Explorer" action for keyboard shortcuts
-	Fixed: several memory leaks and open handles (those may have caused
	that external drives have been prevented to be disconnected
-	locate.exe: non-ascii characters have not been shown correctly

3.0.7.1210:
-	Didn't work in WinNT
-	Fixed problems with Select Databases dialog
-	Fixed (I hope): updating failed and program needs to be closed.

3.0.7.1060:
-	Final version 3.0
-	Fixed some issues with Vista
-	Minor fixes

For changes before the final version, see Readme file for 3.0.7.1060.

The todo list is moved to Locate32's support forum (http://www.locate32.net/forum). 
