#include <iostream>
using namespace std;

const int ROW = 2;
const int COL = 3;

void getArr(int numbers[ROW][COL], int key) {
    if (key < 0 || key >= ROW) {
        cout << "Invalid key " << key << '\n';
        return;
    }

    for (int i = 0; i < COL; i++) {
        cout << numbers[key][i] << " ";
    }
    cout << '\n';
}

void selection2D(int numbers[ROW][COL]) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL - 1; j++) { // Ubah kondisi pengulangan ini
            int minIndex = j;
            for (int k = j + 1; k < COL; k++) {
                if (numbers[i][k] < numbers[i][minIndex]) { // Perbaiki kondisi ini
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

void printMatrix(int numbers[ROW][COL]) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            cout << numbers[i][j] << " ";
        }
        cout << '\n';
    }
}

int main() {
    int numbers[2][3] = {
        {6, 2, 4},
        {8, 3, 1},
    };
    int keyValue = 0; // Inisialisasi dengan 0 agar loop berjalan pertama kali
    string stopping;

    while (true) {
        cout << "Pilih operasi: 1 (Get Array), 2 (Selection Sort), 0 (Stop): ";
        cin >> keyValue;

        if (keyValue == 1) {
            int key;
            cout << "Masukkan indeks baris yang ingin dicetak: ";
            cin >> key;
            getArr(numbers, key);
        } else if (keyValue == 2) {
            selection2D(numbers);
            cout << "Array setelah diurutkan:\n";
            printMatrix(numbers);
        } else if (keyValue == 0) {
            break; // Keluar dari loop
        } else {
            cout << "Pilihan tidak valid. Coba lagi.\n";
        }
    }

    return 0;
}
