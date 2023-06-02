#include <iostream>
#include <string>

const int HARGA_SKS = 125000;
const double KERINGANAN = 0.15;

void inputMatakuliah(int jumlahMataKuliah, int& totalSKS) {
    if (jumlahMataKuliah <= 0) {
        return;
    }

    std::string mataKuliah;
    int sks;

    std::cout << "Masukkan SKS dan nama mata kuliah (pisahkan dengan spasi): ";
    std::cin >> sks;
    std::getline(std::cin >> std::ws, mataKuliah);  // Membaca baris kosong setelah SKS

    totalSKS += sks;

    std::cout << "Matakuliah " << jumlahMataKuliah << ": " << mataKuliah << std::endl;

    inputMatakuliah(jumlahMataKuliah - 1, totalSKS);
}

double hitungBiaya(int totalSKS) {
    double totalBiaya = totalSKS * HARGA_SKS;
    return totalBiaya - (totalBiaya * KERINGANAN);
}

int main() {
    std::string nim, nama;
    int jumlahMataKuliah, totalSKS = 0;

    std::cout << "Masukkan NIM: ";
    std::getline(std::cin, nim);
    std::cout << "Masukkan nama mahasiswa: ";
    std::getline(std::cin, nama);
    std::cout << "Masukkan jumlah mata kuliah: ";
    std::cin >> jumlahMataKuliah;

    inputMatakuliah(jumlahMataKuliah, totalSKS);

    std::cout << "\nOutput program:\n";
    std::cout << "NIM: " << nim << std::endl;
    std::cout << "Nama mahasiswa: " << nama << std::endl;
    std::cout << "Jumlah SKS: " << totalSKS << std::endl;
    std::cout << "Total pembayaran setelah keringanan: Rp. " << hitungBiaya(totalSKS) << std::endl;

    return 0;
}
