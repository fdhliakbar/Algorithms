#include <fstream>
#include <iostream>
using namespace std;

/****************************************************

Kasus : Andi ingin membeli produk tetapi produk yang diinginka
Andi tersedia di luar kota, untuk mendapatkan produk tersebut
Andi menggunakan aplikasi marketplace, contoh:
Shopee, Bukalapak, Lazada, dll.

****************************************************/

// Login
bool login(string username, string pass) {
  bool benar = false;
  if (username == "empud" && pass == "165") {
    benar = true;
  }
  return benar;
}

//  Voucher Diskon
float discountVouchers(float harga) {
  float diskon = 0;
  if (harga >= 100000 && harga <= 300000) {
    diskon = harga * 0.05;
  }
  if (harga > 300000 && harga <= 500000) {
    diskon = harga * 0.1;
  }
  if (harga > 500000) {
    diskon = harga * 0.20;
  }
  return diskon;
}

// asuransi
float asuransi(float harga) {
  float biaya = harga * 0.05;
  return biaya;
}

// Jasa Ekspedisi
string expeditionType() {
  string expeditionName[5] = {"JNE", "J&T", "POS Indonesia", "SiCepat",
                              "Ninja Express"};
  int choose;

  cout << "\t===Jasa Ekspedisi===\t" << endl;
  cout << "1. JNE\n2. J&T\n3. POS Indonesia\n4. SiCepat\n5. Ninja Express\n";
  cout << "Pilih Jasa Ekspedisi: ";
  cin >> choose;

  return expeditionName[choose - 1];
}

// Gratis Ongkir
float gratisOngkir(float totalBelanja) {
  float ongkir = 50000;
  if (totalBelanja >= 100000) {
    ongkir = 0;
  }
  return ongkir;
}

int main() {
  string barang[5] = {"laptop", "Tuna Kaleng", "Dresscode", "adaptor", "ipad"};
  int harga[5] = {20000, 25000, 35000, 10000, 17000};
  char kode[5] = {'1', '2', '3', '4', '5'};
  string barangBeli[10];
  string alamat;
  float hargaBeli[10];
  char kodeBeli[10];

  int pilihan;
  string username;
  string pass;
  float saldo = 10000000;

  int coba = 0;
  while (true) {
    cout << "\t===== LOGIN =====\t\n";
    cout << "Username  : ";
    cin >> username;
    cout << "Password  : ";
    cin >> pass;

    bool next = login(username, pass);
    coba++;
    if (next) {
      break;
    }
    if (coba == 3) {
      return 0;
    }
  }

  cout << "\n=======================\n";
  for (int i = 0; i < 5; i++) {
    cout << "|" << kode[i] << "|" << barang[i] << "|" << harga[i] << endl;
  }
  cout << "=======================\n";

  int indeks = 0;
  float bayar = 0;
  while (true) {
    cout << "masukan pilihan anda ke keranjang :";
    cin >> pilihan;

    barangBeli[indeks] = barang[pilihan];
    hargaBeli[indeks] = harga[pilihan];
    kodeBeli[indeks] = kode[pilihan];
    indeks++;
    bayar = bayar + harga[pilihan];

    char lanjut;
    cout << "Beli Lagi? (y/n) ";
    cin >> lanjut;

    if (lanjut == 'n' || lanjut == 'N') {
      break;
    }
  }

  cout << "Masukkan Alamat Anda: ";
  cin.ignore();
  getline(cin, alamat);

  float diskon = discountVouchers(bayar);

  char next;
  cout << "Apakah ingin Asuransi?(y/n) ";
  cin.ignore();
  cin >> next;

  float proteksi = 0;
  if (next == 'y' || next == 'Y') {
    proteksi = asuransi(bayar);
  }

  float ongkir = gratisOngkir(bayar);

  cout << "Harga Barang " << bayar << endl;
  cout << "Biaya Asuransi " << proteksi << endl;
  cout << "Biaya Kirim " << ongkir << endl;
  cout << "Potongan Harga " << diskon << endl;
  bayar = bayar + proteksi + ongkir - diskon;
  cout << "Bayar Segini Woy " << bayar << endl;
  
  return 0;
}
