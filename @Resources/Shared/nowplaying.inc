; measures for media_*.ini skins in the NowPLaying folder

[measureTitle]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=#player#
PlayerType=Title
DisableLeadingZero=1
Substitute="":"#not_playing#"
Group=info

[measureAlbum]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=[measureTitle]
PlayerType=Album
Substitute="":"#not_playing#"
Group=info

[measureArtist]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=[measureTitle]
PlayerType=Artist
Substitute="":"#not_playing#"
Group=info

[measurePosition]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=[measureTitle]
PlayerType=Position
Group=info

[measureDuration]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=[measureTitle]
PlayerType=Duration
Group=info

[measureState]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=[measureTitle]
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