#include <iostream>
using namespace std;

int main(){
    const int MAX_ARRAY = 5;
    string name[MAX_ARRAY] {};
    short int totalArr = 0;

    for (int i = 0; i < MAX_ARRAY; ++i) {
        cout << "Masukkan nama : ";
        getline(cin, name[i]);
        totalArr++;
    }

    cout << "\n=== Daftar Nama ===\n";
    for (int i = 0; i < MAX_ARRAY; ++i) {
        cout << (i+1) << ". " << name[i] << '\n';
    }

    cout << "Dan total element berjumlah: " << totalArr << endl;

    return 0;
}