/********************************************************************
* Algorithm implementations
*
* What is Recursion ?
*
*  recursion is a method of solving a computational problem where
* the solution depends on solutions to smaller instances of the same
* problem.
*
* https://en.wikipedia.org/wiki/Recursion_(computer_science)
********************************************************************/


#include <iostream>

//How recursion works?
int fibonacci(int number) {
    if(number == 1 || number == 2) {
        return 1;
    }
    return fibonacci(number - 1) + fibonacci(number - 2);
}

int main() {
    int number = 5;
    std::cout<<"Fibonacci of "<<number<<" is "<<fibonacci(number);
    return 0;
}