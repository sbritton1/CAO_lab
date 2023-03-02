#ifndef _REGISTERS_H_
#define _REGISTERS_H_

class Registers
{
private:
    int regs[31];
    int PC;
public:
    Registers();

    void setRegister(int, int);
    int getRegister(int);
    void setPC(int);
    int getPC();

    void print();
};

#endif	/* _REGISTERS_H_ */
