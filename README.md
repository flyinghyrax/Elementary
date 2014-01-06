##Elementary
Some simple, clean [Rainmeter](http://rainmeter.net/cms/) skins, including:

 - The original Time, Date, and 'Chronophage' skins  
 - A Weather skin with current conditions and 3-day forecast  
 - A NowPlaying skin to show song info and control your media player 
 - Simple System skins tomonitor CPU, Memory, Network, and Hard Drive usage. 
 - A minimal Analog clock.
 - A modified version of [JSMorley](https://github.com/jsmorley)'s [YQLFeed](http://www.deviantart.com/art/YQLFeed-3-3-419596824) reader skin

You can get the .rmskin package from [Elementary's page on DeviantArt](http://flyinghyrax.deviantart.com/art/Elementary-Rainmeter-1-5-1-244031084).
 
### License
This work is licensed under the [Creative Commons Attribution Non-Commercial Share-Alike  4.0](http://creativecommons.org/licenses/by-nc-sa/4.0/)

In short, feel free to modify and redistribute these skins to your heart's content, as long as you link back to me, use the same license, and don't make any money from it.

### Customization - Settings.txt
Elementary's user preferences are in the file `...\Skins\Elementary\@Resources\Settings.txt`.  Open this file in any plaintext editor to change settings.  You can also right-click on an Elementary skin, and in the context menu select `Elementary` > `Settings.ini` to quickly open the file in Windows Notepad.

Settings are given in `Key=Value` pairs; to change a setting, modify the portion after the `=` sign, save the file, and refresh any open Elementary skins.

- **font, font2** | The primary and secondary fonts used by the skins.  You can use any installed font, just keep in mind that the positions of the skin elements are optimized for the two default fonts. | [More information on Fonts in Rainmeter][fontdoc] | [JSMorley's handy RainFont utility][rainfont]
- **color** | The color of the skins, given in Decimal (`rrr,ggg,bbb,aaa`) or Hexadecimal (`RrGgBbAa`) format.  The default is `255,255,255,80`; for dark skins, try `0,0,0,200` and experiment from there. | [More information on Color Codes in Rainmeter][colordoc]
- **style** | Sets the attributes of the text in the skins.  Valid values are `NORMAL`, `BOLD`, `ITALIC`, and `BOLDITALIC`.
- **scalar** | Scales the size of the analog clock.  A larger number will increase the size; a smaller number will decrease it.  I recommend staying between 1.5 and 5.0.
- **woeid** | The Yahoo! WOEID location code for the Weather skin.  You can lookup your WOEID [here][rosswoeid].
- **unit** | Changes the units used in the Weather skin.  Use `f` for English and `c` for Metric.
- **language** | The two letter [ISO 639-1 code][iso639] for your preferred language.  Available language files can be viewed in `...\Elementary\@Resources\Languages\`.
- **drive** | The letter of the hard drive to monitor with the system skin.
- **hour** | The format code for the hour in the Time skins.  For a 12-hour clock, use `%#I`; for a 24-hour clock, use `%#H`.  To add leading zeros, remove the `#` sign (i.e., `%I` will give you '08' instead of '8').
- **player** | Music player for the NowPlaying skin.  You can view a list of supported players and their respective `PlayerName` values in the [documentation for the NowPlaying plugin][nowplayingdoc].
- **FeedURLN** | The URLs for the RSS/Atom feeds in the YQLFeed skin.
- **FeedTitleN** | The titles for the feeds.
[fontdoc]: <http://docs.rainmeter.net/tips/fonts-guide> "Guide to fonts in Rainmeter"
[rainfont]: <http://rainmeter.net/forum/viewtopic.php?f=18&t=6103> "RainFont helper utility"
[colordoc]: <http://docs.rainmeter.net/manual/options#Color> "Color codes in the Rainmeter Manual"
[rosswoeid]: <http://woeid.rosselliot.co.nz/lookup/> "Yahoo WOEID Lookup by Ross Elliot"
[nowplayingdoc]: <http://docs.rainmeter.net/manual/plugins/nowplaying#playerlist> "NowPlaying.dll in the Rainmeter Manual - list of supported players"

### Adding Languages - template.txt
To make your own translation file to use with Elementary, look in `...\Elementary\@Resources\Languages\` for the file `template.txt`.  This file lists all the 'keys' for the skins with no 'values' (translations).  
To make a new translation file:

 1. Make a copy of the template file, naming the new copy something appropriate for your language.  (I suggest the [ISO 639-1 code][iso639], because it is simple, universal, and will fit with the "official" translations.)  
 2. Open your new copy and fill in all the values after the `=` signs with the appropriate word or phrase in your language.  Save your changes.
 3. In `Settings.txt`, set `language` to whatever you named your new translation file (without the .txt extension).  Save Settings.txt and refresh any open Elementary skins.  The skins should now use your new translations.

You can check the translation files already included in the `...\Languages\` folder for examples.  

**Some notes:**  

 - The default fonts might not support the special characters needed for some languages.  In such cases you will need to change the font to one that includes the correct characters.
 - Translation files with special characters should be encoded with Unicode.  You can read more specifics [here][unicode] (see the section "Using Unicode in Rainmeter" for how to save the file in a particular text editor).
 - If a word/phrase in your language is much longer than that word/phrase in English, then there may be some problems with text being cut-off in some of the skins.  This should be easily solved with a minor positioning tweak in that skin's .ini file, but consider using shorter synonyms if possible to make it easier to redistribute your translation.

**If you would like to have your translation added to the official Elementary package:**

 - Send a Pull Request on [GitHub][gh].  Feel free to [fork the Elementary repository][fork], add your translation file, and [send a pull request][pullreq] so I can merge your translation into the main repo.  (This is the preferred method as it makes it much easier for me to keep track of the files and who did what.)
 - Email me (see the "Contact" section below).  Just attach your new translation's .txt file, and be sure to indicate how you would like to be credited (real name or username, the URL for your web site or DeviantArt page, that sort of thing).
[iso639]: <https://en.wikipedia.org/wiki/List_of_ISO_639-1_codes> "Wikipedia: List of ISO 639-1 codes"
[unicode]: <http://docs.rainmeter.net/tips/unicode-in-rainmeter> "Unicode in Rainmeter"
[gh]: <https://github.com/FlyingHyrax/Elementary> "Elementary on Github"
[fork]: <https://help.github.com/articles/fork-a-repo> "How to fork a repo"
[pullreq]: <https://help.github.com/articles/using-pull-requests> "How to use pull requests"
 
### Credits
- The primary font is [Century Gothic][cg] by Monotype Imaging
- The secondary font is [Futurist Fixed-Width][ffw] by WSI
- The wallpaper which inspired these skins, and is used for the .rmskin banner image and preview image on DeviantArt is [Elementary by emats][ebe]
- The feed reader skin is a modified version of [YQLFeed by JSMorley](http://www.deviantart.com/art/YQLFeed-3-3-419596824)
- Weather data and feed normalization is provided by the [Yahoo! YQL API](http://developer.yahoo.com/yql/)
- This file was written using [StackEdit.io][stackedit]
[cg]: <https://en.wikipedia.org/wiki/Century_Gothic>
[ffw]: <http://www.dafont.com/futurist-fixed.font>
[ebe]: <http://interfacelift.com/wallpaper/details/1919/elementary.html>
[stackedit]: <https://chrome.google.com/webstore/detail/stackedit/iiooodelglhkcpgbajoejffhijaclcdg>

### Contact
Feel free to contact me with questions or suggestions:

- [On DeviantArt][devart]
- [Rainmeter Forums][forums]
- [Email me][email]
[devart]: <http://flyinghyrax.deviantart.com/> "FlyingHyrax on DeviantArt"
[forums]: <http://rainmeter.net/forum/> "Official Rainnmeter forums"
[email]: <mailto:theflyinghyrax@gmail.com> "mailto:me"

