#include <iostream>
using namespace std;

int main(){
    int i = 0, j= 0;
    int arr[5] = {6, 3, 1, 5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (i; i < size; i++) {
        for (j; j < size; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}