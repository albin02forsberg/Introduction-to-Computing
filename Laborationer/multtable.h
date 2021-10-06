#ifndef MULTTABLE_H
#define MULTTABLE_H
#include <iostream>
#include <iomanip>

void mult(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            std::cout << std::setw(5) << i*j  ;
        }
        std::cout << std::endl;
    }
}

#endif // MULTTABLE_H
