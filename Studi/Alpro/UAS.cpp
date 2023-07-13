#include <iostream>
using namespace std;

/**********************************************

 <<<<<<<<<<<< Array 2 Dimensi >>>>>>>>>>>>>
            Ada 4 Soal ketika UAS :
            Pengurutan(sorting)
            Pecah string(get string)
            Pencarian string(search)
            Recursive (recursive)

**********************************************/

void bubbleSort2D(int arr[][3], int rows) {
    for (int k = 0; k < rows; k++) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < 3 - 1; j++) {
                if (arr[i][j] > arr[i][j + 1]) {
                    int temp = arr[i][j];
                    arr[i][j] = arr[i][j + 1];
                    arr[i][j + 1] = temp;
                }
            }
        }
    }
}

void printArrays(int arr[][3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
}

// void getString(){

// }

void searchString(string words, int lenString){
    string words = "";

    for (int i = 0; i < lenString; i++) {
        for (int j = 0; j < lenString; j++) {

        }
    }

}


int arraysSummation(int arr[][3], int rows, int start_col, int end_col) {
    if (start_col > end_col) {
        return 0;
    } else {
        return arr[rows][start_col] + arraysSummation(arr, rows, start_col + 1, end_col);
    }
}

int main(){
    int nim[3][3] = {
        {2, 5, 1},
        {4, 3, 6},
        {9, 8, 7},
    };

    bubbleSort2D(nim, 3);

    cout << "Hasil : \n";
    printArrays(nim, 3);

    return 0;
}