#include <bits/stdc++.h>
using namespace std;

const int MAX_MAHASISWA = 100;


struct Mahasiswa {
    string nama;
    string nim;
    int umur;
};

struct DataMahasiswa {
    Mahasiswa mahasiswa[MAX_MAHASISWA];
    int jumlahMahasiswa;
};

void tambahMahasiswa(DataMahasiswa& data) {
    if (data.jumlahMahasiswa == MAX_MAHASISWA) {
        cout << "Data mahasiswa penuh!" << endl;
        return;
    }

    Mahasiswa mhs;
    cout << "Masukkan Nama: ";
    getline(cin, mhs.nama);
    cout << "Masukkan NIM: ";
    getline(cin, mhs.nim);
    cout << "Masukkan Umur: ";
    cin >> mhs.umur;
    cin.ignore();

    data.mahasiswa[data.jumlahMahasiswa++] = mhs;
    cout << "Data mahasiswa berhasil ditambahkan!" << endl;
}

void cariMahasiswa(const DataMahasiswa& data, const string& nim) {
    for (int i = 0; i < data.jumlahMahasiswa; i++) {
        if (data.mahasiswa[i].nim == nim) {
            cout << "Nama   : " << data.mahasiswa[i].nama << endl;
            cout << "NIM    : " << data.mahasiswa[i].nim << endl;
            cout << "Umur   : " << data.mahasiswa[i].umur << endl;
            return;
        }
    }
    cout << "Mahasiswa dengan NIM " << nim << " tidak ditemukan." << endl;
}

void hapusMahasiswa(DataMahasiswa& data, const string& nim) {
    for (int i = 0; i < data.jumlahMahasiswa; i++) {
        if (data.mahasiswa[i].nim == nim) {
            for (int j = i; j < data.jumlahMahasiswa - 1; j++) {
                data.mahasiswa[j] = data.mahasiswa[j + 1];
            }
            data.jumlahMahasiswa--;
            cout << "Data mahasiswa dengan NIM " << nim << " berhasil dihapus!" << endl;
            return;
        }
    }
    cout << "Mahasiswa dengan NIM " << nim << " tidak ditemukan." << endl;
}

void tampilkanMahasiswa(const DataMahasiswa& data) {
    if (data.jumlahMahasiswa == 0) {
        cout << "Data mahasiswa kosong." << endl;
        return;
    }

    cout << "Daftar Mahasiswa:" << endl;
    for (int i = 0; i < data.jumlahMahasiswa; i++) {
        cout << "Nama   : " << data.mahasiswa[i].nama << endl;
        cout << "NIM    : " << data.mahasiswa[i].nim << endl;
        cout << "Umur   : " << data.mahasiswa[i].umur << endl;
        cout << endl;
    }
}

int main() {
    cout << "";
    DataMahasiswa data;
    data.jumlahMahasiswa = 0;

    int pilihan;
    string nim;

    do {
        cout << "Menu:" << endl;
        cout << "1. Tambah Mahasiswa" << endl;
        cout << "2. Cari Mahasiswa" << endl;
        cout << "3. Hapus Mahasiswa" << endl;
        cout << "4. Tampilkan Mahasiswa" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan) {
            case 1:
                tambahMahasiswa(data);
                break;
            case 2:
                cout << "Masukkan NIM: ";
                getline(cin, nim);
                cariMahasiswa(data, nim);
                break;
            case 3:
                cout << "Masukkan NIM: ";
                getline(cin, nim);
                hapusMahasiswa(data, nim);
                break;
            case 4:
                tampilkanMahasiswa(data);
                break;
            case 0:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
                break;
        }
        cout << endl;

    } while (pilihan != 0);

    return 0;
}
