#ifndef BOOKCOST_H
#define BOOKCOST_H
#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>

// Uppgift 2.3.3 i labbhäftet

void bookCostPerHour(float bookCost, float pages, float procentToRead, float minPerPage){
    float time = (pages * minPerPage / 60) * (procentToRead / 100);
    float costPerHour = bookCost / time;

    std::cout << "Beräknar kostnad per timme..." << std::endl;

    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << "Du beräknas ägna boken cirka " << std::setprecision(2) << time << " timmar." << std::endl;
    std::cout << "Kostnad per timme: " << std::setprecision(3) << costPerHour << " kr" << std::endl;
}


#endif // BOOKCOST_H
