#ifndef INTEGRAL_H
#define INTEGRAL_H

#include <iostream>
#include <iomanip>

double integraAnalys(double a, double b){
    return (b*b*b - a*a*a)/3;
}

double integraLoop(double a, double b){
    double const dx = 0.00001;
    double area = 0;

    for(double x=a; x<(b-dx); x+=dx){
        area += x*x*dx;
    }

    return area;
}

void testaIntegral(double a, double b){
    std::cout << "Analys: " << integraAnalys(a, b) << std::endl
              << "Loop: " << integraLoop(a, b) << std::endl;
}



#endif // INTEGRAL_H
