#include <iostream>

#include "CPP.h"

CPP::CPP() {
}

void CPP::hello(const char *name) {
    std::cout << "Hello " << name << std::endl;
}
