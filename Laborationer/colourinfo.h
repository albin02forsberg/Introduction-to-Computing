#ifndef COLOURINFO_H
#define COLOURINFO_H
#include <iostream>

unsigned int colourInfo(unsigned int red, unsigned int green, unsigned int blue, unsigned int opacity){
    unsigned int info = 0x0;

    std::cout << std::hex << opacity << std::endl;

    info << red;

    return info;
}

#endif // COLOURINFO_H
