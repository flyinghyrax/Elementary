[Rainmeter]
ContextTitle="Change to [mNextHourString]-hour"
ContextAction=[!WriteKeyValue Variables use24hours (abs(#use24hours#-1)) "#CURRENTPATH#shared.inc"][!Refresh]

;           _   _   _                  __   __
;  ___  ___| |_| |_(_)_ __   __ _ ___  \ \  \ \
; / __|/ _ \ __| __| | '_ \ / _` / __|  \ \  \ \
; \__ \  __/ |_| |_| | | | | (_| \__ \  / /  / /
; |___/\___|\__|\__|_|_| |_|\__, |___/ /_/  /_/
;                           |___/

[Variables]
use24hours=0
tz=local
dst=1

;   __   __           _   _   _
;  / /  / /  ___  ___| |_| |_(_)_ __   __ _ ___
; / /  / /  / __|/ _ \ __| __| | '_ \ / _` / __|
; \ \  \ \  \__ \  __/ |_| |_| | | | | (_| \__ \
;  \_\  \_\ |___/\___|\__|\__|_|_| |_|\__, |___/
;                                     |___/

[mHourCode]
Measure=Calc
Formula=#use24hours#
Substitute="0":"%#I","1":"%#H"

[mNextHourString]
Measure=Calc
Formula=#use24hours#
Substitute="0":"24","1":"12"
