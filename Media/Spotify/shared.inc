[mCommandPlayer]
Measure=Plugin
Plugin=NowPlaying
PlayerName=Spotify
PlayerType=Artist

[mIsPlaying]
Measure=Plugin
Plugin=SpotifyPlugin.dll
Type=Playing
; switched to playing
IfAboveValue=0
IfAboveAction=[!SetOption "playPause" "Text" " #*pause*#]
; switched to paused/stopped
IfBelowValue=1
IfBelowAction=[!SetOption "playPause" "Text" " #*play*#"]

[mArtist]
Measure=Plugin
Plugin=SpotifyPlugin.dll
Type=ArtistName
Substitute="":"#stopped_closed#"

[mAlbum]
Measure=Plugin
Plugin=SpotifyPlugin.dll
Type=AlbumName
Substitute="":"#stopped_closed#"

[mTrack]
Measure=Plugin
Plugin=SpotifyPlugin.dll
Type=TrackName
Substitute="":"#stopped_closed#"

[mTrackLength]
Measure=Plugin
Plugin=SpotifyPlugin.dll
Type=Length
RegExpSubstitute=1
Substitute="^0":"","^:":"0:"

[mTrackPosition]
Measure=Plugin
Plugin=SpotifyPlugin.dll
Type=Position
RegExpSubstitute=1
Substitute="^0":"","^:":"0:"

[mTimer]
Measure=Calc
Formula=((mTimer + 1) % 25)

[mSwitcher]
Measure=Calc
Formula=( mTimer < 9 ? 1 : (mTimer < 17 ? 2 : 3) )
Substitute="1":"%1","2":"%2","3":"%3"
