#include <iostream>
using namespace std;

void selectionSort2D(int arr[][3], int rows){
    for (int i = 0; i < rows; i++){
        for (int j = i + 1; j < rows; j++){
            for(int k = 0; k < 3 - 1; k++){
                if (arr[j][k] == arr[j][k + 1]) {
                    int temp = arr[j][k];
                }
            }
        }
    }
}

int main(){
    const int rows = 3;
    const int cols = 3;
    int arr[rows][cols] = {{9, 5, 7}, {3, 2, 1}, {6, 8, 4}};


    return 0;
}