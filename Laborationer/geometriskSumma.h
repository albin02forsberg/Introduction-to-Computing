#ifndef GEOMETRISKSUMMA_H
#define GEOMETRISKSUMMA_H
#include <iostream>

int geometriskSumma(int n){
   return n*(n+1) / 2;
}

int geometriskSummaLoop(int n){
    int sum = 0;
    for(int i = 0; i <= n; i++){
        sum+=i;
    }

    return sum;
}

int diff(int n){
    int differense = geometriskSumma(n) - geometriskSummaLoop(n);

    return differense;
}

void testSums(int n){
    for(int i = 0; i <= n; i++){
//        if(diff(i) != 0){
//           std::cout << "Stämmer inte för: " << i << std::endl;
//        } else {
//            std::cout << "Stämmer för: " << i << std::endl;
//        }

        if(diff(i) != 0){
            std::cout << i << std::endl;
        }
    }
}

#endif // GEOMETRISKSUMMA_H
