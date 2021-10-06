#ifndef GUESSNUM_H
#define GUESSNUM_H
#include <iostream>
#include <stdlib.h>


int randNum(int n){
    return std::rand() % n;
}

void guessNum(int n){
    int rand = randNum(n);
    int num;
    int tries = 0;

    while(true){
        tries++;

        std::cin >> num;

        if(num < rand){
            std::cout << "Fel! Gissa högre!" << std::endl;
        } else if(num > rand){
            std::cout << "Fel! Gissa lägre!" << std::endl;
        } else {
            break;
        }

    }

    std::cout << "Du gissade rätt på " << tries  << " försök!" << std::endl;
}

#endif // GUESSNUM_H
