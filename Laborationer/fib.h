#ifndef FIB_H
#define FIB_H

#include <iostream>
#include <iomanip>

void fib(int n){
    int val = 1;
    int val2 = 1;
    int i = 0;

    int temp;
    while(i < n){

        std::cout << i + 1 << std::setw(4) << val << std::endl;

        temp = val;
        val = val2;
        val2 = val2 + temp;
        i++;
    }
}

#endif // FIB_H
