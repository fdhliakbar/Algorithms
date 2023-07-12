#include <iostream>

int penambahan(int numbers[], int len, int index = 0) {
    if (index >= len)
        return 0;

    return numbers[index] + penambahan(numbers, len, index + 1);
}

int pengurangan(int numbers[], int len, int index = 0) {
    if (index >= len)
        return 0;

    return numbers[index] - pengurangan(numbers, len, index + 1);
}

int pembagian(int numbers[], int len, int index = 0) {
    if (index >= len)
        return 1;

    if (numbers[index] == 0)
        return 0;

    return numbers[index] / pembagian(numbers, len, index + 1);
}

int sisaBagi(int numbers[], int len, int index = 0) {
    if (index >= len)
        return 1;

    if (numbers[index] == 0)
        return 0;

    return numbers[index] % sisaBagi(numbers, len, index + 1);
}

int main() {
    int numbers[5] = {10, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int hasilPenambahan = penambahan(numbers, size);
    std::cout << "Hasil penambahan: " << hasilPenambahan << std::endl;

    return 0;
}
