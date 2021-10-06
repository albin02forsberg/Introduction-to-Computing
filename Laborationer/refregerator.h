#ifndef REFREGERATOR_H
#define REFREGERATOR_H
#include <iostream>

void refrigWhileTrue(){
    std::cout << "Välkomen till kylskåpsloopen 1" << std::endl;
    int temp;

    while(true){
       std::cout << "Skriv in en temperatur: ";
       std::cin >> temp;

       if(temp < -272){
           break;
       } else if(temp <= -2) {
          std::cout << "Det är för kallt" << std::endl;
       } else if (temp >= 8){
          std::cout << "Det är för varmt" << std::endl;
       } else {
           std::cout << "lagom" << std::endl;
       }

    }
}

void refrigWhileVilkor(){
    std::cout << "Välkomen till kylskåpsloopen 1" << std::endl;
    int temp = 0;

    while(temp > -237){
        std::cout << "Skriv in temp: ";
        std::cin >> temp;

        if(temp <= -2){
            std::cout << "För kallt" << std::endl;
        } else if(temp >= 8){
            std::cout << "För varmt" << std::endl;
        } else{
            std::cout << "Lagom" << std::endl;
        }
    }

}

#endif // REFREGERATOR_H
