; measures for media_*.ini skins in the NowPLaying folder

[measureFilename]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=#player#
PlayerType=File
DisableLeadingZero=1
TrackChangeAction=[!UpdateMeasureGroup info][!UpdateMeter meterInfo]
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
IfAboveAction=[!SetOption meterPlayPause Text " #*play*#"][!UnpauseMeasure measureTimer]
IfEqualAction=[!SetOption meterPlayPause Text " #*pause*#"][!UnpauseMeasure measureTimer]
IfBelowAction=[!SetOption meterPlayPause Text " #*play*#"][!PauseMeasure measureTimer]

[measureTimer]
Measure=Calc
Formula=((measureTimer + 1) % 25)

[measureInfoText]
Measure=Calc
Formula=( measureTimer < 9 ? 1 : (measureTimer < 17 ? 2 : 3) )
Substitute="1":"%1","2":"%2","3":"%3"