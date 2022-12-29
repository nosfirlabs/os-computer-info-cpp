#include <Windows.h>
#include <iostream>

int main()
{
    OSVERSIONINFOEX osvi;
    ZeroMemory(&osvi, sizeof(OSVERSIONINFOEX));
    osvi.dwOSVersionInfoSize = sizeof(OSVERSIONINFOEX);

    if (!GetVersionEx((OSVERSIONINFO*)&osvi))
    {
        std::cerr << "Failed to get version information." << std::endl;
        return 1;
    }

    std::cout << "Operating system name: ";
    if (osvi.dwMajorVersion == 10 && osvi.dwMinorVersion == 0)
    {
        std::cout << "Windows 10" << std::endl;
    }
    else
    {
        std::cout << "Unknown" << std::endl;
    }

    std::cout << "Operating system version: " << osvi.dwMajorVersion << "." << osvi.dwMinorVersion << std::endl;

    return 0;
}
