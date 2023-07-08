#include <iostream>
using namespace std;

void selectionSort(int numbers[], int size){
    int minIndex, temp;

    for (int i = 0; i < size; i++) {
        minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (numbers[j] < numbers[minIndex]) {
                minIndex = j;
            }
        }
        temp = numbers[i];
        numbers[i] = numbers[minIndex];
        numbers[minIndex] = temp;
    }
}

int main(){
    int elements[5] = {8, 2, 1, 4, 5};
    int size = sizeof(elements) / sizeof(elements[0]);

    selectionSort(elements, size);

    for (int i = 0; i < size; i++) {
        cout << elements[i] << " ";
    }
    return 0;
}
