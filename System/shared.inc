[Rainmeter]
ContextTitle="[msrRamContextString]"
ContextAction=[!WriteKeyValue Variables showFreeMem (abs(#showFreeMem#-1)) "#CURRENTPATH#shared.inc"][!Refresh #CURRENTCONFIG#]
ContextTitle2="[msrDiskContextString]"
ContextAction2=[!WriteKeyValue Variables showUsedDisk (abs(#showUsedDisk#-1)) "#CURRENTPATH#shared.inc"][!Refresh #CURRENTCONFIG#]
ContextTitle3="Edit hard drive letter"
ContextAction3=["#CURRENTPATH#shared.inc"]

;           _   _   _                  __   __
;  ___  ___| |_| |_(_)_ __   __ _ ___  \ \  \ \
; / __|/ _ \ __| __| | '_ \ / _` / __|  \ \  \ \
; \__ \  __/ |_| |_| | | | | (_| \__ \  / /  / /
; |___/\___|\__|\__|_|_| |_|\__, |___/ /_/  /_/
;                           |___/

[Variables]
; Set your hard drive letter here, e.g. "drive=C:", "drive="F:", etc.
; (#PROGRAMDRIVE# is the drive where Rainmeter is installed)
drive=#PROGRAMDRIVE#

; Set to '1' to show free RAM, or '0' to show used RAM
showFreeMem=1

; Set to '1' to show used disk space, or '0' to show free disk space
showUsedDisk=0

;   __   __           _   _   _
;  / /  / /  ___  ___| |_| |_(_)_ __   __ _ ___
; / /  / /  / __|/ _ \ __| __| | '_ \ / _` / __|
; \ \  \ \  \__ \  __/ |_| |_| | | | | (_| \__ \
;  \_\  \_\ |___/\___|\__|\__|_|_| |_|\__, |___/
;                                     |___/

[msrRamContextString]
Measure=Calc
Formula=#showFreeMem#
Substitute="0":"Switch to free RAM","1":"Switch to used RAM"

[msrDiskContextString]
Measure=Calc
Formula=#showUsedDisk#
Substitute="0":"Switch to used disk","1":"Switch to free disk"

[msrCPU]
Measure=CPU
Processor=0

[msrMem]
Measure=PhysicalMemory
InvertMeasure=#showFreeMem#
UpdateDivider=3

[msrDrive]
Measure=FreeDiskSpace
Drive=#drive#
InvertMeasure=#showUsedDisk#
UpdateDivider=10

[msrNetUp]
Measure=NetOut
Interface=0
NetOutSpeed=0

[msrNetDown]
Measure=NetIn
Interface=0
NetInSpeed=0
