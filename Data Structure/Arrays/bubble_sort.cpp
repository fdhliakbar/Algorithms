#include <iostream>
using namespace std;

void bubble2D(int arr[][3], int size) {
    bool swapped;
}

void bubbleSort(const int lenArr, int arr[]) {
    bool swapped;

    for (int i = 0; i < lenArr - 1; i++) {
        swapped = false;
        for (int j = 0; j < lenArr - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false) {
            break;
        }
    }
}

void printArr(int arr[], int size) {
    int i;

    for (i = 0; i < size; i++) {
        cout << " " << arr[i];
    }
}


int main() {
    int arr[5] = {4, 8, 2, 1, 3};
    int lenArr = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(lenArr, arr);
    printArr(arr, lenArr);

    return 0;
}