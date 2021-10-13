#ifndef COLOURINFO_H
#define COLOURINFO_H
#include <iostream>
#include <iomanip>

unsigned int colourInfo(unsigned int red, unsigned int green, unsigned int blue, unsigned int opacity){
    unsigned int info = 0x00000000;

    info += red;

    info = info << 8;

    info += green;

    info = info << 8;

    info += blue;

    info = info << 8;

    info += opacity;

    std::cout << std::hex << info << std::endl;

    return info;
}

unsigned int redInfo(unsigned int color){
    return color >> 24;
}

unsigned int greenInfo(unsigned int color){
    color = color << 8;
    return color >> 24;
}

unsigned int blueInfo(unsigned int color){
    color = color << 16;
    return color >> 24;
}

unsigned int opacityInfo(unsigned int color){
    color = color << 24;
    return color >> 24;
}

void printColour(unsigned int color){
    std::cout << "Red: "  << redInfo(color) << std::endl <<
                "Green: "  << greenInfo(color) << std::endl <<
                "Blue: " <<  blueInfo(color) << std::endl <<
                "Opacity: " << opacityInfo(color) << std::endl;
}

#endif // COLOURINFO_H
