#include <iostream>

void selectionSort(int numbers[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int minIndex = j;
            for (int k = j + 1; k < cols; k++) {
                if (numbers[i][k] < numbers[i][minIndex]) {
                    minIndex = k;
                }
            }
            if (minIndex != j) {
                int temp = numbers[i][j];
                numbers[i][j] = numbers[i][minIndex];
                numbers[i][minIndex] = temp;
            }
        }
    }
}

void printMatrix(int numbers[][3], int rows, int cols){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << numbers[i][j] << " ";
        }
        std::cout<<'\n';
    }
}


void searchStr(int number[][3], int key) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (number[i][j] == key) {
                std::cout << number[i][j] << " ";
            }
        }
    }
}


int main(){
    int numbers[3][3] = {
        {4, 2, 5},
        {1, 5, 4},
        {3, 8, 2},
    };
    int rows = 3, cols = 3, searchKey = 1;

    //selectionSort(numbers, rows, cols);
    searchStr(numbers, searchKey);

    return 0;
}