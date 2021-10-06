#ifndef TREENPONE_H
#define TREENPONE_H
#include <iostream>

void collatz(int n, int times = 1){
    std::cout << n << std::endl;

    if(n == 1){
        std::cout << "Det tog: " << times << " gånger." << std::endl;
    } else if(n % 2 == 0) {
        collatz(n/2, times+1);
    } else {
        collatz(3*n + 1, times+1);
    }

//    while(n != 1){
//        times++;
//        if(n % 2 == 0){
//            n = n / 2;
//        } else {
//            n = n * 3 + 1;
//        }
//    }
}

int collatzMax(int n, int max = 0){
//    if(n > max){
//        max = n;
//    }
//    if(n == 1){
//        return max;
//    } else if(n % 2 == 0){
//        collatzMax(n/2, max);
//    } else {
//        collatzMax(3*n + 1, max);
//    }

    while(n != 1){
        if(max < n){
            max = n;
//            std::cout << max << std::endl;
        }else if(n % 2 == 0){
            n = n / 2;
        } else {
            n = n * 3 + 1 ;
        }
    }
    return max;
}

#endif // TREENPONE_H
