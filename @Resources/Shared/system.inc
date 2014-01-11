[msrCPU]
Measure=CPU
Processor=0

[msrMem]
Measure=PhysicalMemory
InvertMeasure=1
UpdateDivider=3

[msrNetUp]
Measure=NetOut
Interface=0
NetOutSpeed=0

[msrNetDown]
Measure=NetIn
Interface=0
NetInSpeed=0

[msrDrive]
Measure=FreeDiskSpace
Drive=#drive#
InvertMeasure=0
UpdateDivider=10