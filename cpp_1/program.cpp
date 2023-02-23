#include <iostream>
#include "program.h"

program::program(int i_numArith, int i_numStore, int i_numLoad, int i_numBranch){
    numArith = i_numArith;
    numStore = i_numStore;
    numLoad = i_numLoad;
    numBranch = i_numBranch;

    numTotal = i_numArith + i_numStore + i_numLoad + i_numBranch;
}

void program::printStats(void){
    std::cout << numArith << "\n";
}


int main(void){
    computer cmptr(15.0, 2.0, 2.5, 3.0, 3.5);
    cmptr.printStats();
}