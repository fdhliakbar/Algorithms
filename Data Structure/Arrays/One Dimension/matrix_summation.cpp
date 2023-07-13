#include <iostream>

void matrixSummation(int (*matriks)[4], int rowSize, int colSize){
  int colSum[colSize] = {0};
  int result = 0;
  
  for(int col=0;col<colSize;col++){
    int sum = 0;
    for(int row=0;row<rowSize;row++){
      sum = sum + matriks[row][col];
    }
    colSum[col] = sum;
  }  
  std::cout << "Hasil penjumlahan pada kolom: ";
  for(int col=0; col<colSize; col++){
    std::cout << colSum[col] << " ";
  }

  std::cout << '\n';

  std::cout << "Hasil ketika di jumlahkan: ";
  for(int col=0;col<colSize;col++){
    result = result + colSum[col];
  }
  std::cout<<result;
}


int main(){
  int matriks[3][4] = {
    {2,6,7,3},
    {1,1,0,5},
    {9,8,4,4}
  };
  int row = 3;
  int col = 4;
  
  std::cout << "Matriks awal:" << '\n';
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      std::cout<<matriks[i][j]<<" ";
    }
    std::cout<<'\n';
  }
  
  matrixSummation(matriks,row,col);
}
