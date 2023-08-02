#include <iostream>
#include "c_interface.h"

int main() {
    std::cout << "Hello, Worl234d!" << std::endl;
    bool status;
    lib_init();
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
