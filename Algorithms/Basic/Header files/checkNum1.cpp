#include <iostream>
#include "checkNum.h"

int main()
{
    int numberValue = 12;

    std::cout << "Check : " << '\n';

    if (isEven(numberValue)) {
        std::cout << "benar";
    } else {
        std::cout << "Sorry";
    }
}