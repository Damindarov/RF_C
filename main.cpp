#include <iostream>
#include "c_interface.h"
#include <windows.h>

int main() {

    bool status;
    status = lib_init();
    std::cout<<status;
    scan(1.0, 1.0, 0, 3450.0, 3450.0);

    return 0;
}
