extern "C" {
    #include "tester_cpu.h"
}

#include <iostream>

int main() {
    run(5000,100,2,1,1,12345,0.0,1,1);
    return 0;
}
