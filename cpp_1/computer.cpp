#include <iostream>
#include <math.h>

#include "computer.h"

computer::computer(double i_clockRateGHz, double i_cpiArith, double i_cpiStore, double i_cpiLoad, double i_cpiBranch){
    clockRateGHz = i_clockRateGHz;
    cpiArith = i_cpiArith;
    cpiStore = i_cpiStore;
    cpiLoad = i_cpiLoad;
    cpiBranch = i_cpiBranch;
}

void computer::printStats(void){
    std::cout << "Clock Rate (GHz): " << clockRateGHz << "\n" << "CPI Arithmetic : " << cpiArith << "\n" << "CPI Store: " << cpiStore << "\n" << "CPI Load: " << cpiLoad << "\n" << "CPI Branch: " << cpiBranch << "\n";


}

double computer::calculateGlobalCPI(){
    double GlobalCPI = (cpiArith + cpiStore + cpiLoad + cpiBranch)/4.0;
    return GlobalCPI;
}

double computer::calculateExecutionTime(program prog){
    double execution_time = 0.0;

    execution_time += cpiArith * prog.numArith / (clockRateGHz * pow(10, 9));
    execution_time += cpiStore * prog.numStore / (clockRateGHz * pow(10, 9));
    execution_time += cpiLoad * prog.numLoad / (clockRateGHz * pow(10, 9));
    execution_time += cpiBranch * prog.numBranch / (clockRateGHz * pow(10, 9));

    return execution_time;
}

double computer::calculateMIPS(void){
    double globalCPI = calculateGlobalCPI();

    double MIPS = clockRateGHz * pow(10, 9) / globalCPI / pow(10, 6);

    return MIPS;
}

double computer::calculateMIPS(program prog){
    int totalInstructions = prog.numTotal;

    double executionTime = calculateExecutionTime(prog);

    double MIPS = totalInstructions / executionTime / pow(10, 6);

    return MIPS;
}



