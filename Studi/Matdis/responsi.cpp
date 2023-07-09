#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    string jurusan;
    Mahasiswa* next;
};

Mahasiswa* tambahData(Mahasiswa* head) {
    Mahasiswa* mhs = new Mahasiswa();
    cout << "Masukkan NIM: ";
    cin >> mhs->nim;
    cout << "Masukkan Nama: ";
    cin.ignore();
    getline(cin, mhs->nama);
    cout << "Masukkan Jurusan: ";
    getline(cin, mhs->jurusan);
    mhs->next = nullptr;

    if (head == nullptr) {
        head = mhs;
    } else {
        Mahasiswa* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = mhs;
    }

    cout << "Data mahasiswa berhasil ditambahkan!" << endl;
    return head;
}

Mahasiswa* cariData(Mahasiswa* head, const string& nim) {
    Mahasiswa* temp = head;
    while (temp != nullptr) {
        if (temp->nim == nim) {
            return temp;
        }
        temp = temp->next;
    }
    return nullptr;
}

Mahasiswa* hapusData(Mahasiswa* head, const string& nim) {
    if (head == nullptr) {
        return nullptr;
    }

    if (head->nim == nim) {
        Mahasiswa* temp = head->next;
        delete head;
        cout << "Data mahasiswa dengan NIM " << nim << " berhasil dihapus." << endl;
        return temp;
    }

    Mahasiswa* curr = head;
    Mahasiswa* prev = nullptr;
    while (curr != nullptr) {
        if (curr->nim == nim) {
            prev->next = curr->next;
            delete curr;
            cout << "Data mahasiswa dengan NIM " << nim << " berhasil dihapus." << endl;
            return head;
        }
        prev = curr;
        curr = curr->next;
    }

    cout << "Data mahasiswa dengan NIM " << nim << " tidak ditemukan." << endl;
    return head;
}

void tampilData(Mahasiswa* head) {
    if (head == nullptr) {
        cout << "Tidak ada data mahasiswa yang tersedia.";
        return;
    }

    cout << "Data Mahasiswa: " << endl;
    cout << "NIM\t\tNama\t\tJurusan" << endl;
    Mahasiswa* temp = head;
    while (temp != nullptr) {
        cout << temp->nim << "\t" << temp->nama << "\t\t" << temp->jurusan << endl;
        temp = temp->next;
    }
}

void hapusSemuaData(Mahasiswa* head) {
    Mahasiswa* curr = head;
    while (curr != nullptr) {
        Mahasiswa* next = curr->next;
        delete curr;
        curr = next;
    }
}

int main() {
    Mahasiswa* head = nullptr;
    int pilihan;

    do {
        cout << "----------------------------------" << endl;
        cout << "Program Pengelolaan Data Mahasiswa" << endl;
        cout << "----------------------------------" << endl;
        cout << "1. Tambah Data Mahasiswa" << endl;
        cout << "2. Cari Data Mahasiswa" << endl;
        cout << "3. Hapus Data Mahasiswa" << endl;
        cout << "4. Tampilkan Data Mahasiswa" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                head = tambahData(head);
                break;
            case 2:
                {
                    string nim;
                    cout << "Masukkan NIM yang ingin dicari: ";
                    cin >> nim;
                    Mahasiswa* hasilPencarian = cariData(head, nim);
                    if (hasilPencarian != nullptr) {
                        cout << "Data Mahasiswa: " << endl;
                        cout << "NIM\t\tNama\t\tJurusan" << endl;
                        cout << hasilPencarian->nim << "\t" << hasilPencarian->nama << "\t\t" << hasilPencarian->jurusan << endl;
                    } else {
                        cout << "Data mahasiswa dengan NIM " << nim << " tidak ditemukan." << endl;
                    }
                }
                break;
            case 3:
                {
                    string nim;
                    cout << "Masukkan NIM yang ingin dihapus: ";
                    cin >> nim;
                    head = hapusData(head, nim);
                }
                break;
            case 4:
                tampilData(head);
                break;
            case 0:
                hapusSemuaData(head);
                cout << "Terima kasih telah menggunakan program ini. Sampai jumpa!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan pilih menu yang tersedia." << endl;
        }

        cout << endl;
    } while (pilihan != 0);

    return 0;
}
