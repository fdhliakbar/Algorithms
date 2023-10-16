#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class KTP {
public:
    struct {
        string NIK, nama, tempatLahir, jenisKelamin, gol;
        string alamat, kecamatan, desa, agama, pekerjaan, wargaNegara;
        int tanggalLahir, RT, RW;
    } data;

    // Menginputkan data KTP dari pengguna.
    void InputData() {
        cout << "Masukkan nomor NIK: ";
        cin >> data.NIK;
        cin.ignore();

        cout << "Masukkan Nama: ";
        getline(cin, data.nama);

        cout << "Masukkan Tempat dan tanggal lahir: ";
        getline(cin, data.tempatLahir);
        cin >> data.tanggalLahir;
        cin.ignore();

        cout << "Masukkan RT/RW: ";
        cin >> data.RT >> data.RW;
        cin.ignore();

        cout << "Masukkan Kelurahan atau Desa: ";
        getline(cin, data.desa);
    }

    // Menampilkan data pengguna
    void TampilkanDataPengguna() {
        cout << "Data KTP:" << endl;
        cout << "NIK: " << data.NIK << endl;
        cout << "Nama: " << data.nama << endl;
        cout << "Tempat Lahir: " << data.tempatLahir << endl;
        cout << "Tanggal Lahir: " << data.tanggalLahir << endl;
        cout << "RT/RW: " << data.RT << "/" << data.RW << endl;
        cout << "Desa: " << data.desa << endl;
    }
};

int main() {
    KTP ktp[3]; // Membuat array untuk menyimpan 3 data KTP.

    for (int i = 0; i < 3; ++i) {
        cout << "Data KTP ke-" << (i + 1) << ":" << endl;
        ktp[i].InputData();

        char choose;
        cout << "Apakah Anda ingin mengisi data KTP lainnya? (y/n) ";
        cin >> choose;
        if (choose != 'y' && choose != 'Y') {
            break; // Keluar dari loop jika pengguna tidak ingin melanjutkan.
        }
    }

    // Menyimpan data KTP ke dalam file "data_ktp.txt".
    ofstream file("data_ktp.txt");
    if (file.is_open()) {
        for (int i = 0; i < 3; ++i) {
            file << "Data KTP ke-" << (i + 1) << ":" << endl;
            file << "NIK: " << ktp[i].data.NIK << endl;
            file << "Nama: " << ktp[i].data.nama << endl;
            file << "Tempat Lahir: " << ktp[i].data.tempatLahir << endl;
            file << "Tanggal Lahir: " << ktp[i].data.tanggalLahir << endl;
            file << "RT/RW: " << ktp[i].data.RT << "/" << ktp[i].data.RW << endl;
            file << "Desa: " << ktp[i].data.desa << endl;
            file << endl;
        }
        file.close();
        cout << "Data KTP telah disimpan ke dalam file 'data_ktp.txt'" << endl;
    } else {
        cerr << "Gagal membuka file 'data_ktp.txt' untuk disimpan." << endl;
    }

    return 0;
}
