#include <iostream>
using namespace std;

void bubbleSort(int numbers[], int size){
    int count = 0;
    int i = 0, j = 0;

    for (i; i < size; i++) {
        for (j; j < (size - i - 1); j++) {
            if (numbers[j] > numbers[j+1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
                count = 1;
            }
        }
    }
}

void printNumbers(int numbers[], int size) {
    for (int i = 0; i < size; i++) {
    cout << numbers[i] << " ";
    }
}

int main(){
    int elements [5] = {8, 2, 1, 4, 5};
    int size = sizeof(elements) / sizeof(elements[0]);

    bubbleSort(elements, size);

    cout << "Hasil : ";

    printNumbers(elements, size);
}