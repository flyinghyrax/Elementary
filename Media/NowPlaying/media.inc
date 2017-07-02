[Rainmeter]
ContextTitle="Use with AIMP"
ContextAction=[!WriteKeyValue Variables player "AIMP" #CURRENTPATH#measures.inc][!Refresh]
ContextTitle2="Use with foobar2000"
ContextAction2=[!WriteKeyValue Variables player "CAD" #CURRENTPATH#measures.inc][!Refresh]
ContextTitle3="Use with iTunes"
ContextAction3=[!WriteKeyValue Variables player "iTunes" #CURRENTPATH#measures.inc][!Refresh]
ContextTitle4="Use with J. River Media Center"
ContextAction4=[!WriteKeyValue Variables player "CAD" #CURRENTPATH#measures.inc][!Refresh]
ContextTitle5="Use with MediaMonkey"
ContextAction5=[!WriteKeyValue Variables player "MediaMonkey" #CURRENTPATH#measures.inc][!Refresh]
ContextTitle6="Use with MusicBee"
ContextAction6=[!WriteKeyValue Variables player "CAD" #CURRENTPATH#measures.inc][!Refresh]
ContextTitle7="Use with Winamp"
ContextAction7=[!WriteKeyValue Variables player "Winamp" #CURRENTPATH#measures.inc][!Refresh]
ContextTitle8="Use with Windows Media Player"
ContextAction8=[!WriteKeyValue Variables player "WMP" #CURRENTPATH#measures.inc][!Refresh]
ContextTitle9="---"
ContextTitle10="View more info online"
ContextAction10=[https://docs.rainmeter.net/manual/plugins/nowplaying/#playerlist]

;           _   _   _                  __   __
;  ___  ___| |_| |_(_)_ __   __ _ ___  \ \  \ \
; / __|/ _ \ __| __| | '_ \ / _` / __|  \ \  \ \
; \__ \  __/ |_| |_| | | | | (_| \__ \  / /  / /
; |___/\___|\__|\__|_|_| |_|\__, |___/ /_/  /_/
;                           |___/

[Variables]
; you can set this via the context menu. Docs for this setting:
; https://docs.rainmeter.net/manual/plugins/nowplaying/#playerlist
; Valid values:
; AIMP, CAD, iTunes, MediaMonkey, Winamp, WMP, Spotify, WLM
; (Spotify and WLM are only partially supported!)
player=CAD

;   __   __           _   _   _
;  / /  / /  ___  ___| |_| |_(_)_ __   __ _ ___
; / /  / /  / __|/ _ \ __| __| | '_ \ / _` / __|
; \ \  \ \  \__ \  __/ |_| |_| | | | | (_| \__ \
;  \_\  \_\ |___/\___|\__|\__|_|_| |_|\__, |___/
;                                     |___/

[measureFilename]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=#player#
PlayerType=File
DisableLeadingZero=1
TrackChangeAction=[!UpdateMeasureGroup info][!UpdateMeter info]
RegExpSubstitute=1
Substitute=".*\\(.+)$":"\1","^$":"#stopped_closed#"

[measureTitle]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=[measureFilename]
PlayerType=Title
Group=info
DynamicVariables=1
Substitute="":"[measureFilename]"

[measureAlbum]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=[measureFilename]
PlayerType=Album
Group=info
DynamicVariables=1
Substitute="":"[measureFilename]"

[measureArtist]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=[measureFilename]
PlayerType=Artist
Group=info
DynamicVariables=1
Substitute="":"[measureFilename]"

[measurePosition]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=[measureFilename]
PlayerType=Position
Group=info

[measureDuration]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=[measureFilename]
PlayerType=Duration
Group=info

[measureState]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=[measureFilename]
PlayerType=State
IfAboveValue=1
IfBelowValue=1
IfEqualValue=1
IfAboveAction=[!SetOption playPause Text " #*play*#"][!UnpauseMeasure measureTimer]
IfEqualAction=[!SetOption playPause Text " #*pause*#"][!UnpauseMeasure measureTimer]
IfBelowAction=[!SetOption playPause Text " #*play*#"][!PauseMeasure measureTimer]

[measureTimer]
Measure=Calc
Formula=((measureTimer + 1) % 25)

[measureInfoText]
Measure=Calc
Formula=( measureTimer < 9 ? 1 : (measureTimer < 17 ? 2 : 3) )
Substitute="1":"%1","2":"%2","3":"%3"
