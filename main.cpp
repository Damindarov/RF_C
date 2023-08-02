#include <iostream>
#include "c_interface.h"
#include <windows.h>

int main() {
    std::cout << "Hello, Worl234d!" << std::endl;
//    HMODULE hLib = LoadLibrary("RfSpringVisionSystemLib.dll");
//
//    if (hLib == NULL) {
//        std::wcerr << "Library MyLibrary.dll not found" << std::endl;
//        exit(1);
//    }
    //    bool status;
    status = lib_init();
    std::cout<<status;
        lib_clear();
    lib_initialized();
    move_to(123,329);
    return 0;
}

//#include <iostream>
//#include <windows.h>
//int main() {
//    HINSTANCE hDll = LoadLibrary("RfSpringVisionSystemLib.dll");
//    if (hDll != NULL)
//
//    {
//
//        printf("Library was loaded\n");
//
//    }
//    std::cout << "Hello, Worl234d!" << std::endl;
//    return 0;
//}
