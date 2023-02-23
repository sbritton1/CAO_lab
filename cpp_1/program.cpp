#include <iostream>
#include "program.h"

program::program(int i_numArith, int i_numStore, int i_numLoad, int i_numBranch){
    numArith = i_numArith;
    numStore = i_numStore;
    numLoad = i_numLoad;
    numBranch = i_numBranch;

    numTotal = i_numArith + i_numStore + i_numLoad + i_numBranch;
}

program::program(int i_numTotal, double fractionArith, double fractionStore, double fractionLoad){
    double fractionBranch = 1 - fractionArith - fractionStore - fractionLoad;

    numTotal = i_numTotal;

    numArith = int(i_numTotal * fractionArith);
    numStore = int(i_numTotal * fractionStore);
    numLoad = int(i_numTotal * fractionLoad);
    numBranch = int(i_numTotal * fractionBranch);
}

void program::printStats(void){
    std::cout << "Number of arithmetic calculations: " << numArith << "\nNumber of store operations: " << numStore << "\nNumber of load operations: " << numLoad << "\nNumber of branch operations: " << numBranch << "\nTotal number of operations: " << numTotal << "\n"; 
}
