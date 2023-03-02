#ifndef _DERIVED_INSTRUCTIONS_H_
#define _DERIVED_INSTRUCTIONS_H_

#include <iostream>
#include "registers.h"
#include "instruction.h"

using namespace std;

class AddInstruction: public Instruction
{
public:
    AddInstruction(int, int, int);

    void disassemble(){
        cout << "add $" << op1 << ", $" << op2 << ", $" << op3 << "\n"; 
    }

    int execute (Registers * regs){
        // get register values
        int reg2 = regs->getRegister(op2);
        int reg3 = regs->getRegister(op3);

        // set register to the sum of the other two register values
        regs->setRegister(op1, reg2 + reg3);

        return regs->getPC() + 1;
    }
};

class SubInstruction: public Instruction
{
public:
    SubInstruction(int, int, int);

    void disassemble(){
        cout << "sub $" << op1 << ", $" << op2 << ", $" << op3 << "\n"; 
    }

    int execute (Registers * regs){
        // get register values
        int reg2 = regs->getRegister(op2);
        int reg3 = regs->getRegister(op3);

        // set register to the subtraction of the other two register values
        regs->setRegister(op1, reg2 - reg3);

        return regs->getPC() + 1;
    }
};

class OriInstruction: public Instruction
{
public:
    OriInstruction(int, int, int);

    void disassemble(){
        cout << "ori $" << op1 << ", $" << op2 << ", " << op3 << "\n"; 
    }

    int execute (Registers * regs){
        // get register values
        int reg2 = regs->getRegister(op2);
        int reg3 = regs->getRegister(op3);

        // set register to the bitwise or of the other two register values
        regs->setRegister(op1, reg2 | reg3);

        return regs->getPC() + 1;
    }
};

class BrneInstruction: public Instruction
{
public:
    BrneInstruction(int, int, int);

    void disassemble(){
        cout << "brne $" << op1 << ", $" << op2 << ", " << op3 << "\n"; 
    }

    int execute (Registers * regs){
        // get register values
        int reg1 = regs->getRegister(op1);
        int reg2 = regs->getRegister(op2);

        int branch_address = op3;

        if (reg1 != reg2){
            // return the PC-relative address
            return branch_address;
        }
        return regs->getPC() + 1;
    }
};

#endif /* _DERIVED_INSTRUCTIONS_H_ */