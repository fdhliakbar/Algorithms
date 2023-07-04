#include <bits/stdc++.h>
using namespace std;

void summation(){

}

void sorting(){
    int temp;

    for (int row = 0; row < 3; row++){
        for (int col = 1; col < 3; col++) {
            if (row > col) {
                temp = row;
            }
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
        {197, 180, 190},
        {120, 124, 105},
        {200, 198, 253},
    };

    string mhsName[3][3] = {
        {"fadhli", "bota", "riko"},
        {"shiro", "kiko", "sophie"},
        {"wayne", "arthur", "monalisa"},
    };

    printMatrix(nim);
    return 0;
}