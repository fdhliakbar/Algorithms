#include <iostream>
using namespace std;

void bubbleSort(int values[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (values[j] > values[j+1]) {
                swap(values[j], values[j + 1]);
            }
        }
    }
}

void printArray(int values[], int n) {
    for (int i = 0; i < n; i++) {
        cout << values[i] << " ";
    }
    cout << '\n';
}

int main(){
    int values[5] = {3, 4, 2, 5, 1};
    int lenvalues = sizeof(values) / sizeof(values[0]);

    bubbleSort(values, lenvalues);
    printArray(values, lenvalues);
    return 0;
}