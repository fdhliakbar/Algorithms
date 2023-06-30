#include <bits/stdc++.h>

void matrixElementInput(int matrix[][10], int row, int col){
    std::cout<<"Masukkan jumlah baris : ";
    std::cin>>row;

    std::cout<<"Masukkan jumlah kolom : ";
    std::cin>>col;

    std::cout<<"\nMasukkan elemen-elemen matrix : \n";

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            std::cout<<"Baris ke-"<<(i+1)<<" kolom ke-"<<(j+1)<<" : ";
            std::cin>>matrix[i][j];
        }
    }
}

void sorting(int matrix[][10], int row, int col){
}

void printMatrix(int matrix[][10], int row, int col){
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
}

int main(){
    int matrix[10][10];
    int row, col;
    int userInput;

    std::cout<<"+++++ PILIHAN +++++\n\n";
    std::cout<<"1.Input\n2.Sorting\n3.Cetak\n4.Operasi\n";
    std::cout<<"Pilihan anda : ";
    std::cin>>userInput;

    switch (userInput) {
    case1:
        matrixElementInput(matrix,row,col);
        break;
    case2:
        printMatrix(matrix,row,col);
        break;
    case3:
        sorting(matrix,row,col);
        break;
    default:
        break;
    }

    return 0;
}