/**************************************************************

    Author : Muhamad Fadhli Akbar
    Since Release : 08-07-2023

**************************************************************/


#include <iostream>
using namespace std;

bool isOdd(int number){
    return number % 2 == 0;
}

bool isEven(int number){
    return number % 2 == 1;
}

bool isPrime(int number){
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}


int main(){
    int number = 9;
    int odd = isOdd(number);
    int even = isEven(number);
    int prime = isPrime(number);

    cout << odd << even << prime << '\n';
}