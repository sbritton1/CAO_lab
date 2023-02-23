#ifndef COMPUTER
#define COMPUTER

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

    void printStats();

    double calculateGlobalCPI();
};

#endif