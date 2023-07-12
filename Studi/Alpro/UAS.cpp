#include <iostream>
using namespace std;

/**********************************************

 <<<<<<<<<<<< Array 2 Dimensi >>>>>>>>>>>>>
            Ada 4 Soal ketika UAS:
            Pengurutan(sorting)
            Pecah string(get string)
            Pencarian string(search)
            Recursive (recursive)

**********************************************/

void selectionSort(int numbers[], int size){
    int minIndex, temp;

    for (int i = 0; i < size; i++) {
        minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (numbers[j] < numbers[minIndex]) {
                minIndex = j;
            }
        }
        temp = numbers[i];
        numbers[i] = numbers[minIndex];
        numbers[minIndex] = temp;
    }
}

int arraysSummation(){

}

void getString(){

}

void searchString(){

}



int main(){
    int nimMhs[3][3] = {
        {2, 5, 1},
        {4, 3, 6},
        {9, 8, 7},
    };

    

    return 0;
}