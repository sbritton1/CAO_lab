#ifndef _REGISTERS_H_
#define _REGISTERS_H_

class Registers
{
private:
    int regNum;
    int value;
public:
    Registers(int, int);

    void setRegister(regNum, value);
    int getRegister(regNum);
    void setPC(value);
    int getPC();
};

#endif	/* _REGISTERS_H_ */
