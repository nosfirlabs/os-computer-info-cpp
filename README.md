# os-computer-info-cpp
asking windows api about our computer details

This code uses the GetVersionEx function to get information about the operating system and stores it in an OSVERSIONINFOEX structure. The structure contains several fields that provide information about the operating system, including the major and minor version numbers. The code then checks the major and minor version numbers to determine the name of the operating system and prints it to the console.

Note that this code will only work on Windows operating systems. If you need to get information about the operating system on other platforms, you will need to use platform-specific APIs or libraries.
