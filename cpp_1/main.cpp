#include <iostream>

#include "computer.h"
#include "computer.cpp"

#include "program.h"
#include "program.cpp"

int main(void){
    /* 
    // computer 1
    computer cmptr1(15.0, 2.0, 2.5, 3.0, 3.5);
    cmptr1.printStats();
    std::cout << "Global CPI computer 1: " << cmptr1.calculateGlobalCPI() << "\n";

    std::cout << "\n";


    // computer 2
    computer cmptr2(7.0, 5.0, 4.0, 9.0, 6.5);
    cmptr2.printStats();
    std::cout << "Global CPI computer 2: " << cmptr2.calculateGlobalCPI() << "\n";

    std::cout << "\n";

    // program 1
    program prog1(41231, 22352, 27812, 27812);
    prog1.printStats();

    std::cout << "\n";

    // program 2 with fractions
    program prog2(8, 0.25, 0.25, 0.25);
    prog2.printStats();

    std::cout << "\n";

    // test calculate execution time
    std::cout << cmptr1.calculateExecutionTime(prog1) << "\n";

    // test mips wihtout program
    std::cout << cmptr1.calculateMIPS() << "\n";

    // test mips with program
    std::cout << cmptr1.calculateMIPS(prog1) << "\n";
    */

    computer computer1(1, 2, 2, 3, 4);
    computer computer2(1.2, 2, 3, 4, 3);
    computer computer3(2, 2, 2, 4, 6);

    program programA(2000, 100, 100, 50);
    program programB(2000, 0.1, 0.4, 0.25);
    program programC(500, 100, 2000, 200);

    // print stats for computer 1
    std::cout << "Stats for computer 1:\n";
    computer1.printStats();
    std::cout << "\n";

    // print stats for computer 2
    std::cout << "Stats for computer 2:\n";
    computer2.printStats();
    std::cout << "\n";

    // print stats for computer 3
    std::cout << "Stats for computer 3:\n";
    computer3.printStats();
    std::cout << "\n";


    // print global MIPS rating for computer 1
    std::cout << "Global MIPS for computer 1: " << computer1.calculateMIPS() << "\n";

    // print global MIPS rating for computer 2
    std::cout << "Global MIPS for computer 2: " << computer2.calculateMIPS() << "\n";

    // print global MIPS rating for computer 3
    std::cout << "Global MIPS for computer 3: " << computer3.calculateMIPS() << "\n";

    std::cout << "\n";

    // execution times of program A for computer 1, 2 and 3
    std::cout << "Execution time of program A by computer 1: " << computer1.calculateExecutionTime(programA) << "\n";
    std::cout << "Execution time of program A by computer 2: " << computer2.calculateExecutionTime(programA) << "\n";
    std::cout << "Execution time of program A by computer 3: " << computer3.calculateExecutionTime(programA) << "\n";

    std::cout << "\n";

    // execution times of program B for computer 1, 2 and 3
    std::cout << "Execution time of program B by computer 1: " << computer1.calculateExecutionTime(programB) << "\n";
    std::cout << "Execution time of program B by computer 2: " << computer2.calculateExecutionTime(programB) << "\n";
    std::cout << "Execution time of program B by computer 3: " << computer3.calculateExecutionTime(programB) << "\n";

    std::cout << "\n";

    // execution times of program C for computer 1, 2 and 3
    std::cout << "Execution time of program C by computer 1: " << computer1.calculateExecutionTime(programC) << "\n";
    std::cout << "Execution time of program C by computer 2: " << computer2.calculateExecutionTime(programC) << "\n";
    std::cout << "Execution time of program C by computer 3: " << computer3.calculateExecutionTime(programC) << "\n";

    std::cout << "\n";

    // MIPS rating of computer 1 for program A, B and C
    std::cout << "MIPS rating of computer 1 for program A: " << computer1.calculateMIPS(programA) << "\n";
    std::cout << "MIPS rating of computer 1 for program B: " << computer1.calculateMIPS(programB) << "\n";
    std::cout << "MIPS rating of computer 1 for program C: " << computer1.calculateMIPS(programC) << "\n";

    std::cout << "\n";

    // MIPS rating of computer 2 for program A, B and C
    std::cout << "MIPS rating of computer 2 for program A: " << computer2.calculateMIPS(programA) << "\n";
    std::cout << "MIPS rating of computer 2 for program B: " << computer2.calculateMIPS(programB) << "\n";
    std::cout << "MIPS rating of computer 2 for program C: " << computer2.calculateMIPS(programC) << "\n";

    std::cout << "\n";

    // MIPS rating of computer 3 for program A, B and C
    std::cout << "MIPS rating of computer 3 for program A: " << computer3.calculateMIPS(programA) << "\n";
    std::cout << "MIPS rating of computer 3 for program B: " << computer3.calculateMIPS(programB) << "\n";
    std::cout << "MIPS rating of computer 3 for program C: " << computer3.calculateMIPS(programC) << "\n";
}