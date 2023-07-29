#include <iostream>
using namespace std;

/************************************************************************

                    * Author by fdhliakbar

    1. Buatlah Fungsi dengan nama "sortingStock" untuk
        mengurutkan secara ascending berdasarkan nilai pada
        kolom ke-3. buatkan kembalian return berupa
        array 2 dimensi yang sudah terurut
    
    2. Buatkan fungsi getSubString dengan parameter input "keyword"
        untuk mendapatkan string digit 5 & 6. kembalian return
        berupa string dengan contoh output = "B2"

    3. Buatkan fungsi getProductName


    4. Buatkan fungsi rekursif bernama stockSum untuk menghitung jumlah
        elemen/nilai pada kolom ke-3 dari inputan array.
        Output : 25


************************************************************************/


struct Product {
    string id;
    string name;
    int stock;
};

// Nomor 1
int sortingStock(Product array[][3]) {
    int afterSorting[5][3];

    for (int col = 0; col < 5; col++) {
        for (int row = 0; row < 3; row++) {
            if (array[row][col].stock < array[row][col + 1].stock) {
                int temp = array[row][col].stock;
            }
        }
    }
    return afterSorting[0][0];
}

// Nomor 2
string getSubString(string key) {
    string result = "";

    for (int i = 4; i <= 5; i++) {
        result += key[i];
    }
    return result;
}

// Nomor 3
void getProductName(Product array[][3], string codeValue) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; i++) {
            if (codeValue == array[i][j].id) {
                cout << array[i][j].name << endl;
            }
        }
    }
}

int stockSum(Product array[][3], int row, int sum) {
    if (row == 5) {
        return sum;
    }

    sum += array[row][2].stock;

    return stockSum(array, row + 1, sum);
}



int main() {
    Product array[5][3] = {
        {"B1", "Chickball Keju", 5},
        {"B2", "Kacang Garuda", 3},
        {"B3", "Prochizz", 6},
        {"B4", "Sari Roti", 4},
        {"B5", "Potabee 90 Gr", 7},
    };
    string keyword = "A191B2";
    string codeValue = getSubString(keyword);

    getProductName(array,codeValue);


    return 0;
}
