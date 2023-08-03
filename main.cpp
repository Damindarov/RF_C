#include <iostream>
#include "c_interface.h"
#include <windows.h>

int main() {

    bool status;
    status = lib_init();
    std::cout<<status;

    return 0;
}
