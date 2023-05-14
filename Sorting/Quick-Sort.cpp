/********************************************************************
* Algorithm implementations
*
* What is Bubble Sort ?
*
* Bubble Sort is the simplest sorting algorithm
* that works by repeatedly swapping the adjacent elements
* if they are in the wrong order.
* This algorithm is not suitable for large data
* sets as its average and worst-case time complexity is quite high.
*
* https://www.geeksforgeeks.org/bubble-sort/
********************************************************************/


#include <bits/stdc++.h>

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low -1);

    for (int j = low; j <= high- 1; j++) {
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}