This is a WIP project for a standalone rkflashtool for windows compiled with Visual Studio 2017

It's basically rkflashtool source with some adjustment to make it to compile without cygwin or msys

The solution includes a project to build libusb as a static lib.

Just open rkflashwin.sln with visual studio 2017, build libusb-1.0, build rkflashwin, profit.