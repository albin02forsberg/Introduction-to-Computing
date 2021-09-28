#ifndef CHANGE_H
#define CHANGE_H
#include <iostream>

// Upg 2.3.7
void change(int pay){
    std::cout << pay << " kr är: " << std::endl;

    int currency [8] = {500, 200, 100, 20, 10, 5, 2, 1};

    for(int i = 0; i < (sizeof (currency)/sizeof (*currency)); i++){
        std::cout << pay / currency[i] << " x " << currency[i] << " kr" << std::endl;
        pay -= (pay / currency[i]) * currency[i];
    }
}

#endif // CHANGE_H
