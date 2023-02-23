#ifndef Program
#define Program

class program{
public:
    // private class variables
    int numArith;
    int numStore;
    int numLoad;
    int numBranch;

    int numTotal;
public:
    // public function prototypes
    program(int, int, int, int);
    program(int, double, double, double);

    void printStats();

    double calculateGlobalCPI();
};

#endif