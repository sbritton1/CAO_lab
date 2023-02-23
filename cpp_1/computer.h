#ifndef COMPUTER
#define COMPUTER

#include "program.h"

class computer{
private:
    // private class variables
    double clockRateGHz; 
    double cpiArith;
    double cpiStore;
    double cpiLoad; 
    double cpiBranch;
public:
    // public function prototypes
    computer(double, double, double, double, double);

    void printStats(void);

    double calculateGlobalCPI(void);

    double calculateExecutionTime(program);

    double calculateMIPS(void);

    double calculateMIPS(program);
};

#endif