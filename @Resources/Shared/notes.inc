; measures for the notes skins in the Notes/ folder

[measureScript]
Measure=Script
ScriptFile="#@#Scripts\notes.lua"

[measureInput]
Measure=Plugin
Plugin=InputText.dll
DynamicVariables=1
DefaultValue=[measureScript]
SolidColor=50,50,50
FontColor=250,250,250
FontFace=#font#
FontSize=12
FocusDismiss=1
X=0
Y=0
W=60 
H=21
Command1=[!SetOption measureScript temp """$UserInput$"""] FontSize=#InputFontSize# X=[meterText:X] Y=[meterText:Y] W=#width# H=#height#
Command2=[!CommandMeasure measureScript writeToFile()][!Refresh #CURRENTCONFIG#]
Command3=[!WriteKeyValue Variables width $UserInput$ "#CURRENTPATH##CURRENTFILE#"][!Refresh #CURRENTCONFIG#] DefaultValue=#width#
Command4=[!WriteKeyValue Variables height $UserInput$ "#CURRENTPATH##CURRENTFILE#"][!Refresh #CURRENTCONFIG#] DefaultValue=#height#