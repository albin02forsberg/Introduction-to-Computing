#ifndef ROTEN_H
#define ROTEN_H
#include <iostream>

double sqrtLoop(double a){

    double g = 1;
    double k = 0;
    double approx = 1;

    for(int i = 0; i < 10000; i++){
        k = a / g;
        g = (k + a) / 2;
    }

    std::cout << k << std::endl;

    return approx;
}

#endif // ROTEN_H
