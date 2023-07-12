#include <iostream>
using namespace std;

void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

void bubbleSort(int numbers[], int size){
    int count = 0;
    int i, j;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (numbers[j] > numbers[j+1]) {
                swap(numbers[j], numbers[j+1]);
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

    printNumbers(elements, size);
}