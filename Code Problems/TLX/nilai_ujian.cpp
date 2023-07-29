#include <iostream>
#include <chrono>

/*

    Besok Pak Dengklek akan UTS (Ujian Tengah Semester).
    Pak Dengklek tahu bahwa gurunya pasti memberi nilai dalam bilangan bulat.
    Nilai UTS diberikan dalam skala 100 yakni antara
    nilai 0-100 (inklusif). Artinya 0 adalah
    nilai yang diperbolehkan, begitu juga nilai 100.

    Diberikan sebuah nilai N.
    Periksa apakah nilai tersebut diperbolehkan dalam UTS Pak Dengklek besok

    Contoh Masukan : 4
    Contoh Keluaran : YA
    Contoh Masukan2 : -20
    Contoh Keluaran2 : TIDAK

    Batasan : -10.000 <= N <= 10.000

*/


int main() {
    auto start = std::chrono::high_resolution_clock::now();

    // Kode program C++ Anda di sini

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
   
    short int N;

    std::cout << "Masukan: ";
    std::cin >> N;

    if (N >= 0 && N <= 100) {
        std::cout << "YA" << '\n';
    } else {
        std::cout << "TIDAK" << '\n';
    }

     std::cout << "Waktu eksekusi: " << duration.count() << " detik" << std::endl;

    return 0;
}
