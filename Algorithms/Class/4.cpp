#include <iostream>
#include <fstream>
#include <string>

using namespace std;


class KTP {
public:
    // Constructor untuk menginisialisasi data KTP.
    KTP(string nomor, string nama, string alamat)
        : nomorKTP_(nomor), nama_(nama), alamat_(alamat) {
    }

    // Metode untuk menginputkan data KTP dari pengguna.
    void InputData() {
        cout << "Masukkan nomor KTP: ";
        cin >> nomorKTP_;
        cin.ignore(); // Membersihkan buffer.
        
        cout << "Masukkan nama: ";
        getline(cin, nama_);

        cout << "Masukkan alamat: ";
        getline(cin, alamat_);
    }

    // Metode untuk menyimpan data KTP ke dalam sebuah file.
    void SimpanDataKeFile(const string& namaFile) {
        ofstream file(namaFile);

        if (file.is_open()) {
            file << "Nomor KTP: " << nomorKTP_ << endl;
            file << "Nama: " << nama_ << endl;
            file << "Alamat: " << alamat_ << endl;

            file.close();
            cout << "Data KTP telah disimpan ke dalam file " << namaFile << endl;
        } else {
            cerr << "Gagal membuka file " << namaFile << " untuk disimpan." << endl;
        }
    }

private:
    string nomorKTP_;
    string nama_;
    string alamat_;
};

int main() {
    string nomor, nama, alamat;
    cout << "Program Simpan Data KTP" << endl;

    // Membuat objek KTP.
    KTP dataKTP("", "", "");

    // Menginputkan data KTP dari pengguna.
    dataKTP.InputData();

    // Menyimpan data KTP ke dalam file "data_ktp.txt".
    dataKTP.SimpanDataKeFile("data_ktp.txt");

    return 0;
}
