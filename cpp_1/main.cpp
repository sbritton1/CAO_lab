#include "computer.cpp"

int main(void){
    // computer 1
    computer cmptr1(15.0, 2.0, 2.5, 3.0, 3.5);
    cmptr1.printStats();
    cmptr1.calculateGlobalCPI();

    // computer 2
    computer cmptr2(7.0, 5.0, 4.0, 9.0, 6.5);
    cmptr2.printStats();
    cmptr2.calculateGlobalCPI();
}