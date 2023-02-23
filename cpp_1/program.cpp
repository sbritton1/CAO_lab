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
    
    
    return 0;
}