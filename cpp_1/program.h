#ifndef Program
#define Program

class program{
private:
    // private class variables
    int numArith;
    int numStore;
    int numLoad;
    int numBranch;

    int numTotal;
public:
    // public function prototypes
    program(int, int, int, int);

    void printStats();

    double calculateGlobalCPI();
};

#endif