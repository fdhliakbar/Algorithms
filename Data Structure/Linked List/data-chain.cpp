#include <iostream>
using namespace std;

class node {
    public:
        int data;
        node *berikut;
};

int main(){
    // langkah satu
    node* baru;
    baru = new node;
    baru->data = 5;
    baru->berikut = NULL;
    cout << "Isi data node baru adalah : " << baru->data << endl;

    // langkah dua
    node *lain;
    lain = new node;
    lain->data = 6;
    lain->berikut = NULL;
    cout << "Isi data node lain adalah : " << lain->data << endl;

    // langkah tiga : menyambung rantai
    baru->berikut = lain;
    cout << "Isi data node lain dicetak dari node baru adalah : ";
    cout << baru->berikut->data << endl;

    // langkah empat
    node *kepala = baru;
    cout << "Mencetak node pertama dari pointer kepala : ";
    cout << kepala->data << endl;
    cout << "Mencetak node kedua dari pointer kepala : ";
    cout << kepala->berikut->data << endl;

    // langkah lima : pointer yang jalan-jalan
    cout << "Menggunakan perulangan untuk mencetak setiap data pada rantai\n";
    node *jalan = kepala;
    int I = 1;
    while(jalan != NULL) {
        cout << "Data ke-" << I << "> " << jalan->data << endl;
        I++;
        jalan = jalan->berikut;
    }

    // langkah enam : bukti bahwa pointer kepala tidak kehilangan data.
    cout << "Mencetak node pertama dari pointer kepala : ";
    cout << kepala->data << endl;
    cout << "Mencetak node kedua dari pointer kepala : ";
    cout << kepala->berikut->data << endl;
}
