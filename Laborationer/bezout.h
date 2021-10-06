#ifndef BEZOUT_H
#define BEZOUT_H
#include <iostream>
#include <iomanip>

void bezout(int n1, int n2){
    int remainder = 10;
    int l1 = 1;
    int r1 = 0;
    int l2 = 0;
    int r2 = 1;

    std::cout << n1 << "\t | "  << l1 << "\t" << r1 << std::endl;
    remainder = n1 % n2;
    int times = n1 / n2;
    std::cout << n2 << "\t | "  << l2 << "\t" << r2 << "\t" << times << std::endl;
    std::cout << "------------------------------" << std::endl;

    int temp = 0;

    do {
        remainder = n1 % n2;
        times = n1 / n2;

        l2 = l1 - (l2 * times);
        r2 = r1 - (r2 * times);

        std::cout << remainder << "\t" << " | " << l2 << "\t" << r2 << "\t" << (n1/n2) << std::endl;
        n1 = n2;
        n2 = remainder;
    } while( remainder > 0);
}

#endif // BEZOUT_H
