#include <bits/stdc++.h>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int nim[][3], int size){
    for(int i = 0; i < size; i++) {
        int minIndex = i;

        for (int j = i + 1; j < size; j++) {
            if (nim[j][0] < nim[minIndex][0]) {
                minIndex = j;
            }
        }

        if (minIndex != 1) {
            swap(&nim[i][0], &nim[minIndex][0]);
            swap(&nim[i][1], &nim[minIndex][1]);
        }
    }
}

void printMatrix(int nim[][3]){
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            cout << nim[row][col] << " ";
        }
        cout << '\n';
    }
}

int main(){
    int nim[3][3] = {
        {1, 5, 3},
        {8, 2, 1},
        {4, 3, 6},
    };

    int size = sizeof(nim) / sizeof(nim[0]);

    cout << "Array sebelum diurutkan: \n";
    printMatrix(nim);

    selectionSort(nim, size);

    cout << "Array setelah diurutkan: \n";
    printMatrix(nim);
    return 0;
}