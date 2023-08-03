#include <iostream>
#include "c_interface.h"
#include <windows.h>

int main() {
    std::cout << "Hello, Worl234d!" << std::endl;

    bool status;
    status = lib_init();
    std::cout<<status;

    return 0;
}
