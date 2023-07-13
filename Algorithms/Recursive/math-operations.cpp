#include <iostream>

int addition(int numbers[], int len, int index = 0) {
    if (index >= len)
        return 0;

    return numbers[index] + addition(numbers, len, index + 1);
}

int subtraction(int numbers[], int len, int index = 0) {
    if (index >= len)
        return 0;

    return numbers[index] - subtraction(numbers, len, index + 1);
}

int division(int numbers[], int len, int index = 0) {
    if (index >= len)
        return 1;

    if (numbers[index] == 0)
        return 0;

    return numbers[index] / division(numbers, len, index + 1);
}

int modulus(int numbers[], int len, int index = 0) {
    if (index >= len)
        return 1;

    if (numbers[index] == 0)
        return 0;

    return numbers[index] % modulus(numbers, len, index + 1);
}

int main() {
    int numbers[5] = {10, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int result = addition(numbers, size);
    std::cout << "Hasil penambahan: " << result << std::endl;

    return 0;
}
