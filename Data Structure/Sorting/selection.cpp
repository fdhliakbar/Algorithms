#include <iostream>
using namespace std;

void selectionSort(int arr[], int N) {

    for (int i = 0; i < N - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < N; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}


int main() {
    int arr[5] = {2, 3, 1, 5, 4};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: ";
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";
    }

    selectionSort(arr, arrSize);

    cout << "\nAfter sorting: ";
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}