#ifndef SORT_ALGO_H
#define SORT_ALGO_H

#include <iostream>

int* bubbleSort(int arr[]) {
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    return arr;
}

#endif // SORT_ALGO_H