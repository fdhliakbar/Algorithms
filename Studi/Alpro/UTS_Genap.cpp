#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1)
        return false;

    int sqrtN = sqrt(n);
    for (int i = 2; i <= sqrtN; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

void processArrayValues(int values[], int size) {
    for (int i = 0; i < size; i++) {
        int value = values[i];
        bool isValuePrime = isPrime(value);
        
        std::cout << value << " adalah ";
        if (isValuePrime)
            std::cout << "bilangan prima." << std::endl;
        else
            std::cout << "bukan bilangan prima." << std::endl;
    }
}

int main() {
    int values[] = {2, 7, 11, 15};
    int size = sizeof(values) / sizeof(values[0]);

    processArrayValues(values, size);

    return 0;
}
