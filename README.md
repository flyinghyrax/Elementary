##Elementary
Some simple, clean [Rainmeter](https://github.com/rainmeter/rainmeter) skins, including skins for

- Time and Date
- The Weather ([Yahoo!](http://weather.yahoo.com/))
- Notes
- Your media player ([NowPlaying](http://docs.rainmeter.net/manual/plugins/nowplaying))
- Basic system monitoring  
(cpu, ram, hard drive space, NIC traffic, and uptime)
- RSS and ATOM feeds (modded [YQLFeed][jsm-yqlfeed])
- File and Web search ([Locate32](http://locate32.cogit.net/) and [DuckDuckGo](https://duckduckgo.com/about))

Rainmeter _3.0.2_ or later is required for these skins to function properly.  You can get the latest version from [Rainmeter.net](http://rainmeter.net/).
The RMSKIN installer package for these skins can be downloaded from [DeviantArt][devart] or [GitHub](https://github.com/FlyingHyrax/Elementary/releases).

### License
This work is licensed under the [Creative Commons Attribution Non-Commercial Share-Alike  4.0](http://creativecommons.org/licenses/by-nc-sa/4.0/)

In short, feel free to modify and redistribute these skins to your heart's content - just refer back to me, use the same license, and don't sell the work.

### Customization - Settings.txt
Elementary's user preferences are in the file `...\Skins\Elementary\@Resources\Settings.txt`.  Open this file in any plaintext editor to change settings.  You can also right-click on an Elementary skin, and in the context menu select `Elementary` > `Settings.ini` to quickly open the file in Windows Notepad.

Settings are given in `Key=Value` pairs; to change a setting, modify the portion after the `=` sign, save the file, and refresh any open Elementary skins.

| Key | Description | Default |
|----:|:------------|:-------:|
| **font** | The primary font used by the skins.  You can use any installed font, just keep in mind that the positions of the skin elements are optimized for the two default fonts. ([More information on Fonts in Rainmeter][fontdoc]) ([JSMorley's handy RainFont utility][rainfont]) | `Century Gothic`
| **font2** | The secondary font used by the skins.  See above. | `Futurist Fixed-Width`
| **style** | Sets the attributes of the text in the skins.  Valid values are `NORMAL`, `BOLD`, `ITALIC`, and `BOLDITALIC`. | `NORMAL`
| **color** | The primary color for the skins, given in Decimal (`rrr,ggg,bbb,aaa`) or Hexadecimal (`RrGgBbAa`) format.  For darker skins, try `0,0,0,200` and experiment from there. ([More information on Color Codes in Rainmeter][colordoc]) | `255,255,255,180`
| **highlight** | An optional highlight color.  By default, this is 'turned off' by setting it to `#color#`, so that the highlight color will match the main color.  Simply change this to a valid color code to enable the highlight color. | `#color#`
| **woeid** | The Yahoo! WOEID location code for the weather skin.  You can lookup your WOEID [here][rosswoeid]. | `44418` (London)
| **unit** | Changes the units used in the Weather skin.  Use `f` for English and `c` for Metric. | `f`
| **language** | The two letter [ISO 639-1 code][iso639] for your preferred language.  Available language files can be viewed in `...\Elementary\@Resources\Languages\`.  Current options are `en`, `fr`, `ru`, and `de`. | `en`
| **drive** | The letter of the hard drive to monitor with the system skin | `C:`
| **player** | Music player for the NowPlaying skin.  You can view a list of supported players and their respective `PlayerName` values in the [documentation for the NowPlaying plugin][nowplayingdoc]. | `CAD`
| **hour** | The format code for the hour in the Time skins.  For a 12-hour clock, use `%#I`; for a 24-hour clock, use `%#H`.  To add leading zeros, remove the `#` sign (i.e., `%I` will give you '08' instead of '8'). | `%#I`
| **scalar** | Scales the size of the analog clock.  A larger number will increase the size; a smaller number will decrease it.  I recommend staying between 1.5 and 5.0. | `3.0`
| **FeedURL1** - **FeedURL6**  | The URLs for the 6 RSS/Atom feeds in the YQLFeed skins. | _(various)_
| **FeedTitle1** - **FeedTitle6** | The title for each feed | _(various)_

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

Please check the translation files already included in the `...\Languages\` folder for examples.  

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

### Contributors
- JSMorley: [YQLFeed][jsm-yqlfeed] and [SearchDrive][jsm-searchdrive]
- sa3er: Notes skin is based on [Note Paper][notepaper]
- smurfier: Fixed, optimized, and generally improved Lua code
- amc242: Russian translation
- mothergarage: German translation
- Skymil: French translation
- Requios: Dutch translation
[jsm-yqlfeed]: <http://www.deviantart.com/art/YQLFeed-3-3-419596824>
[jsm-searchdrive]: <http://rainmeter.net/forum/viewtopic.php?f=27&t=17181>
[notepaper]: <http://www.deviantart.com/art/Note-Paper-1-1-392404729>

### Credits
- The primary font is [Century Gothic][cg] by Monotype Imaging
- The secondary font is [Futurist Fixed-Width][ffw] by WSI
- The wallpaper which inspired these skins, and is used for the .rmskin banner image and other preview images is [Elementary by emats][ebe]
- Weather data and feed normalization is provided by the [Yahoo! YQL API][yql]
- [S. D. G.][sdg]
[cg]: <https://en.wikipedia.org/wiki/Century_Gothic>
[ffw]: <http://www.dafont.com/futurist-fixed.font>
[ebe]: <http://interfacelift.com/wallpaper/details/1919/elementary.html>
[yql]: <http://developer.yahoo.com/yql/>
[stackedit]: <https://chrome.google.com/webstore/detail/stackedit/iiooodelglhkcpgbajoejffhijaclcdg>
[sdg]: <http://en.wikipedia.org/wiki/Soli_Deo_gloria>

### Contact
Feel free to contact me with questions or suggestions:

- [On DeviantArt][devart]
- [Rainmeter Forums][forums]
- [Email me][email]
[devart]: <http://flyinghyrax.deviantart.com/> "FlyingHyrax on DeviantArt"
[forums]: <http://rainmeter.net/forum/> "Official Rainnmeter forums"
[email]: <mailto:theflyinghyrax@gmail.com> "mailto:me"
