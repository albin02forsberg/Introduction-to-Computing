#ifndef DECIMALDOT_H
#define DECIMALDOT_H
#include <iostream>

unsigned int fromDecToDot(int tal3, int tal2, int tal1, int tal0){
    unsigned int value = 0b0;

    value += tal3;
    value = value << 8;
    value += tal2;
    value = value << 8;
    value += tal1;
    value = value << 8;
    value += tal0;

    std::cout << value << std::endl;

    return value;
}

#endif // DECIMALDOT_H
