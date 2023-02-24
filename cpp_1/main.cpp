#include <iostream>

#include "computer.h"
#include "program.h"

int main(void){
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