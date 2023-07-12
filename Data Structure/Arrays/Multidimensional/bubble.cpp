#include <iostream>
using namespace std;

void bubbleSort2DArray(int arr[][3], int rows) {
    for (int k = 0; k < rows; k++) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < 3 - 1; j++) {
                if (arr[i][j] > arr[i][j + 1]) {
                    // Tukar posisi elemen jika elemen saat ini lebih besar dari elemen berikutnya
                    int temp = arr[i][j];
                    arr[i][j] = arr[i][j + 1];
                    arr[i][j + 1] = temp;
                }
            }
        }
    }
}

int main() {
    const int rows = 3;
    const int cols = 3;
    int arr[rows][cols] = {{9, 5, 7}, {3, 2, 1}, {6, 8, 4}};

    cout << "Sebelum diurutkan:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    bubbleSort2DArray(arr, rows);

    cout << "Setelah diurutkan:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
