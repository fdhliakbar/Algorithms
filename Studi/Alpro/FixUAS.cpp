#include <iostream>
using namespace std;

struct Product {
    string id;
    string name;
    int stock;
};

int stockSum(Product array[][3], int row, int sum) {
    if (row == 5) { // Baris ke-5 (indeks baris 4) sudah tercapai, mengembalikan hasil penjumlahan sementara
        return sum;
    }

    // Menambahkan nilai stok dari kolom ke-3 pada baris saat ini ke dalam sum
    sum += array[row][2].stock;

    // Memanggil fungsi rekursif untuk baris berikutnya (row + 1)
    return stockSum(array, row + 1, sum);
}


// No 2
string getSubString(string key) {
    string result = "";

    for (int i = 4; i <= 5; i++) {
        result += key[i];
    }
    return result;
}

void getProductName(Product array[][3], string codeValue) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; i++) {
            if (codeValue == array[i][j].id) {
                cout << array[i][j].name << endl;
            }
        }
    }
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

    int sum = stockSum(array, 0, 0); // Memulai perhitungan dari baris pertama (indeks baris 0) dengan sum awal 0

    //cout << "Total stock pada baris ke-3: " << sum << endl;

    string codeValue = getSubString(keyword);

    getProductName(array,codeValue);


    return 0;
}
