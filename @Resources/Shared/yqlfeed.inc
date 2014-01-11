; Measures for YQLFeed skins in Reader/ folder + shared vars

[Variables]
CurrentFeed=http://feeds.reuters.com/reuters/topNews
CurrentFeedTitle=Reuters Top News
Decoder="&#34;":"''","&quot;":"''","&#39;":"'","&apos;":"'","&#38;":"&","&amp;":"&","&#60;":"<","&lt;":"<","&#62;":">","&gt;":">","&160;":" ","nbsp;":" ","&#161;":"¡","&iexcl;":"¡","&#162;":"¢","&cent;":"¢","&#163;":"£","&pound;":"£","&#164;":"¤","&curren;":"¤","&#165;":"¥","&yen;":"¥","&#166;":"¦","&brvbar;":"¦","&#167;":"§","&sect;":"§","&#168;":"¨","&uml;":"¨","&#169;":"©","&copy;":"©","&#170;":"ª","&ordf;":"ª","&#171;":"«","&laquo;":"«","&#172;":"¬","&not;":"¬","&#174;":"®","&reg;":"®","&#175;":"¯","&macr;":"¯","&#176;":"°","&deg;":"°","&#177;":"±","&plusmn;":"±","&#178;":"²","&sup2;":"²","&#179;":"³","&sup3;":"³","&#180;":"´","&acute;":"´","&#181;":"µ","&micro;":"µ","&#182;":"¶","&para;":"¶","&#183;":"·","&middot;":"·","&#184;":"¸","&cedil;":"¸","&#185;":"¹","&sup1;":"¹","&#186;":"º","&ordm;":"º","&#187;":"»","&raquo;":"»","&#188;":"¼","&frac14;":"¼","&#189;":"½","&frac12;":"½","&#190;":"¾","&frac34;":"¾","&#191;":"¿","&iquest;":"¿","&#215;":"×","&times;":"×","&#247;":"÷","&divide;":"÷","&#192;":"À","&Agrave;":"À","&#193;":"Á","&Aacute;":"Á","&#194;":"Â","&Acirc;":"Â","&#195;":"Ã","&Atilde;":"Ã","&#196;":"Ä","&Auml;":"Ä","&#197;":"Å","&Aring;":"Å","&#198;":"Æ","&AElig;":"Æ","&#199;":"Ç","&Ccedil;":"Ç","&#200;":"È","&Egrave;":"È","&#201;":"É","&Eacute;":"É","&#202;":"Ê","&Ecirc;":"Ê","&#203;":"Ë","&Euml;":"Ë","&#204;":"Ì","&Igrave;":"Ì","&#205;":"Í","&Iacute;":"Í","&#206;":"Î","&Icirc;":"Î","&#207;":"Ï","&Iuml;":"Ï","&#208;":"Ð","&ETH;":"Ð","&#209;":"Ñ","&Ntilde;":"Ñ","&#210;":"Ò","&Ograve;":"Ò","&#211;":"Ó","&Oacute;":"Ó","&#212;":"Ô","&Ocirc;":"Ô","&#213;":"Õ","&Otilde;":"Õ","&#214;":"Ö","&Ouml;":"Ö","&#216;":"Ø","&Oslash;":"Ø","&#217;":"Ù","&Ugrave;":"Ù","&#218;":"Ú","&Uacute;":"Ú","&#219;":"Û","&Ucirc;":"Û","&#220;":"Ü","&Uuml;":"Ü","&#221;":"Ý","&Yacute;":"Ý","&#222;":"Þ","&THORN;":"Þ","&#223;":"","&szlig;":"ß","&#224;":"à","&agrave;":"à","&#225;":"á","&aacute;":"á","&#226;":"â","&acirc;":"â","&#227;":"ã","&atilde;":"ã","&#228;":"ä","&auml;":"ä","&#229;":"å","&aring;":"å","&#230;":"æ","&aelig;":"æ","&#231;":"ç","&ccedil;":"ç","&#232;":"è","&egrave;":"è","&#233;":"é","&eacute;":"é","&#234;":"ê","&ecirc;":"ê","&#235;":"ë","&euml;":"ë","&#236;":"ì","&igrave;":"ì","&#237;":"í","&iacute;":"í","&#238;":"î","&icirc;":"î","&#239;":"ï","&iuml;":"ï","&#240;":"ð","&eth;":"ð","&#241;":"ñ","&ntilde;":"ñ","&#242;":"ò","&ograve;":"ò","&#243;":"ó","&oacute;":"ó","&#244;":"ô","&ocirc;":"ô","&#245;":"õ","&otilde;":"õ","&#246;":"ö","&ouml;":"ö","&#248;":"ø","&oslash;":"ø","&#249;":"ù","&ugrave;":"ù","&#250;":"ú","&uacute;":"ú","&#251;":"û","&ucirc;":"û","&#252;":"ü","&uuml;":"ü","&#253;":"ý","&yacute;":"ý","&#254;":"þ","&thorn;":"þ","&#255;":"ÿ","&yuml;":"ÿ","&#8220;":"“","&#8221;":"”"

[MeasureURLEncoder]
Measure=Calc
Formula=1
UpdateDivider=-1
RegExpSubstitute=1
Substitute="1":"#CurrentFeed#","\$":"%24","&":"%26","\+":"%2B","/":"%2F",":":"%3A",";":"%3B",",":"%2C","=":"%3D","\?":"%3F","@":"%40"," ":"%20","<":"%3C",">":"%3E","#":"%23","\(":"%28","\)":"%29","{":"%7B","}":"%7D","\|":"%7C","\\":"%5C","\^":"%5E","~":"%7E","\[":"%5B","\]":"%5D","`":"%60","\+":"%2B","\{":"%7B","\}":"%7D","^(.+)$":"http://query.yahooapis.com/v1/public/yql?q=select%20title%2C%20link%2C%20updated%2C%20entry.title%2C%20entry.link%2C%20entry.updated%20from%20feednormalizer%20where%20url%3D%22\1%22%20AND%20output%3D%22atom_1.0%22%20%7C%20sort(field%3D%22entry.updated%22%2C%20descending%3D%22true%22)%20%7C%20unique(field%3D%22entry.title%22%2C%20field%3D%22entry.updated%22)&diagnostics=true"

[MeasureFeed]
Measure=Plugin
Plugin=WebParser
URL=[&MeasureURLEncoder]
RegExp=(?siU)#FeedInfo##Entry##Entry##Entry##Entry##Entry#
ForceReload=1
UpdateRate=300
DynamicVariables=1
FinishAction=[!CommandMeasure MeasureNew """CheckNew("MeasureEntry1Time", "MeterEntry1Title", "MeasureEntry1Age")"""][!CommandMeasure MeasureNew """CheckNew("MeasureEntry2Time", "MeterEntry2Title", "MeasureEntry2Age")"""][!CommandMeasure MeasureNew """CheckNew("MeasureEntry3Time", "MeterEntry3Title", "MeasureEntry3Age")"""][!CommandMeasure MeasureNew """CheckNew("MeasureEntry4Time", "MeterEntry4Title", "MeasureEntry4Age")"""][!CommandMeasure MeasureNew """CheckNew("MeasureEntry5Time", "MeterEntry5Title", "MeasureEntry5Age")"""]

; Feed Information

[MeasureFeedTitle]
Measure=Plugin
Plugin=WebParser
URL=[MeasureFeed]
StringIndex=1
Substitute=#Decoder#
DecodeCharacterReference=1

[MeasureFeedLink]
Measure=Plugin
Plugin=WebParser
URL=[MeasureFeed]
StringIndex=2
Substitute=#Decoder#
DecodeCharacterReference=1

; Entry 1
[MeasureEntry1Title]
Measure=Plugin
Plugin=WebParser
URL=[MeasureFeed]
StringIndex=3
RegExp=(?siU)#EntryItem#
StringIndex2=1
Substitute=#Decoder#
DecodeCharacterReference=1

[MeasureEntry1Link]
Measure=Plugin
Plugin=WebParser
URL=[MeasureFeed]
StringIndex=3
RegExp=(?siU)#EntryItem#
StringIndex2=2
Substitute=#Decoder#
DecodeCharacterReference=1

[MeasureEntry1Time]
Measure=Plugin
Plugin=WebParser
URL=[MeasureFeed]
StringIndex=3
RegExp=(?siU)#EntryItem#
StringIndex2=3

[MeasureEntry1Age]
Measure=Time
Format=" "

; Entry 2

[MeasureEntry2Title]
Measure=Plugin
Plugin=WebParser
URL=[MeasureFeed]
StringIndex=4
RegExp=(?siU)#EntryItem#
StringIndex2=1
Substitute=#Decoder#
DecodeCharacterReference=1

[MeasureEntry2Link]
Measure=Plugin
Plugin=WebParser
URL=[MeasureFeed]
StringIndex=4
RegExp=(?siU)#EntryItem#
StringIndex2=2
Substitute=#Decoder#
DecodeCharacterReference=1

[MeasureEntry2Time]
Measure=Plugin
Plugin=WebParser
URL=[MeasureFeed]
StringIndex=4
RegExp=(?siU)#EntryItem#
StringIndex2=3

[MeasureEntry2Age]
Measure=Time
Format=" "

; Entry 3

[MeasureEntry3Title]
Measure=Plugin
Plugin=WebParser
URL=[MeasureFeed]
StringIndex=5
RegExp=(?siU)#EntryItem#
StringIndex2=1
Substitute=#Decoder#
DecodeCharacterReference=1

[MeasureEntry3Link]
Measure=Plugin
Plugin=WebParser
URL=[MeasureFeed]
StringIndex=5
RegExp=(?siU)#EntryItem#
StringIndex2=2
Substitute=#Decoder#
DecodeCharacterReference=1

[MeasureEntry3Time]
Measure=Plugin
Plugin=WebParser
URL=[MeasureFeed]
StringIndex=5
RegExp=(?siU)#EntryItem#
StringIndex2=3

[MeasureEntry3Age]
Measure=Time
Format=" "

; Entry 4

[MeasureEntry4Title]
Measure=Plugin
Plugin=WebParser
URL=[MeasureFeed]
StringIndex=6
RegExp=(?siU)#EntryItem#
StringIndex2=1
Substitute=#Decoder#
DecodeCharacterReference=1

[MeasureEntry4Link]
Measure=Plugin
Plugin=WebParser
URL=[MeasureFeed]
StringIndex=6
RegExp=(?siU)#EntryItem#
StringIndex2=2
Substitute=#Decoder#
DecodeCharacterReference=1

[MeasureEntry4Time]
Measure=Plugin
Plugin=WebParser
URL=[MeasureFeed]
StringIndex=6
RegExp=(?siU)#EntryItem#
StringIndex2=3

[MeasureEntry4Age]
Measure=Time
Format=" "

; Entry 5

[MeasureEntry5Title]
Measure=Plugin
Plugin=WebParser
URL=[MeasureFeed]
StringIndex=7
RegExp=(?siU)#EntryItem#
StringIndex2=1
Substitute=#Decoder#
DecodeCharacterReference=1

[MeasureEntry5Link]
Measure=Plugin
Plugin=WebParser
URL=[MeasureFeed]
StringIndex=7
RegExp=(?siU)#EntryItem#
StringIndex2=2
Substitute=#Decoder#
DecodeCharacterReference=1

[MeasureEntry5Time]
Measure=Plugin
Plugin=WebParser
URL=[MeasureFeed]
StringIndex=7
RegExp=(?siU)#EntryItem#
StringIndex2=3

[MeasureEntry5Age]
Measure=Time
Format=" "

; Check entry ages

[MeasureNew]
Measure=Script
ScriptFile="#@#Scripts\YQLFeed.lua"
UpdateDivider=-1

[MeasureEntryAges]
Measure=Time
Format=%M
OnChangeAction=[!CommandMeasure MeasureNew """CheckNew("MeasureEntry1Time", "MeterEntry1Title", "MeasureEntry1Age")"""][!CommandMeasure MeasureNew """CheckNew("MeasureEntry2Time", "MeterEntry2Title", "MeasureEntry2Age")"""][!CommandMeasure MeasureNew """CheckNew("MeasureEntry3Time", "MeterEntry3Title", "MeasureEntry3Age")"""][!CommandMeasure MeasureNew """CheckNew("MeasureEntry4Time", "MeterEntry4Title", "MeasureEntry4Age")"""][!CommandMeasure MeasureNew """CheckNew("MeasureEntry5Time", "MeterEntry5Title", "MeasureEntry5Age")"""]
