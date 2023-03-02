#include <iostream>
#include "registers.h"

using namespace std;

Registers::Registers ()
{
    // all registers are initialized to zero
	for (int i = 0; i < 31; i++)
	{
        regs[i] = 0;
	}

    // program counter is initialized to 0
    PC = 0;

    return;
}

void Registers::setRegister(int regNum, int value){
    regs[regNum - 1] = value;
}


int Registers::getRegister(int regNum){
    if (regNum == 0){
        return 0;
    }
    
    return regs[regNum - 1];
}

void Registers::setPC(int value){
    PC = value;
}

int Registers::getPC(void){
    return PC;
}

void Registers::print(){
    cout << "Content of the registers:\n";
    
    cout << "\t$0: 0\n";

    for (int i = 1; i < 32; i++){
        cout << "\t$" << i << ": " << getRegister(i) << "\n";
    }
    
    return;
}