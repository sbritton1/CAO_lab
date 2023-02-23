#include <iostream>
#include "computer.h"

computer::computer(double i_clockRateGHz, double i_cpiArith, double i_cpiStore, double i_cpiLoad, double i_cpiBranch){
    clockRateGHz = i_clockRateGHz;
    cpiArith = i_cpiArith;
    cpiStore = i_cpiStore;
    cpiLoad = i_cpiLoad;
    cpiBranch = i_cpiBranch;
}

void computer::printStats(void){
    std::cout << "Clock Rate (GHz): " << clockRateGHz << "\n" << "CPI Arithmetic : " << cpiArith << "\n" << "CPI Store: " << cpiStore << "\n" << "CPI Load: " << cpiLoad << "\n" << "CPI Branch" << cpiBranch << "\n";
}

double computer::calculateGlobalCPI(){
    // ! NOT DONE
    return 0.0;
}


int main(void){
    computer cmptr(15.0, 2.0, 2.5, 3.0, 3.5);
    cmptr.printStats();
}
