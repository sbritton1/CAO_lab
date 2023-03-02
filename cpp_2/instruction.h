#ifndef _INSTRUCTION_H_
#define _INSTRUCTION_H_

#include <iostream>
#include "registers.h"

using namespace std;

class Instruction
{
protected:
    int op1;
    int op2;
    int op3;
public:
    Instruction(int i_op1, int i_op2, int i_op3){
        op1 = i_op1;
        op2 = i_op2;
        op3 = i_op3;
    }

    // pure virtual function
    virtual void disassemble() = 0;

    // pure virtual function
    virtual int execute (Registers *);
};

#endif /* _INSTRUCTION_H_ */
