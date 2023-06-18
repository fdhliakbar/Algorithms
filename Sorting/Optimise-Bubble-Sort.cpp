#include <iostream>
using namespace std;

void bubbleSort(int array[], int size, int count) {
    for (int i = 0; i < (size-1); i++) {
    for (int j = 0; j < (size-i-1); j++) {
        if (array[j] > array[j + 1]) {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
        count = 1;
        }
    }
    if (count == 0) break;
    cout << "Tahap " << i+1 << " : ";
    for(int k = 0; k < size; k++){
        cout << array[k] << " ";
    }
    cout << '\n';
    }
    cout<<'\n';
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
    cout << array[i] << " ";
    }
    cout << "\n\n";
}

int main() {
    int data[5] = {-2, 45, 0, 11, -9};
    int count = 0;
    int size = sizeof(data) / sizeof(data[0]);

    cout << "Before: ";
    printArray(data, size);

    bubbleSort(data, size, count);

    cout << "After: ";
    printArray(data, size);
    return 0;
}
