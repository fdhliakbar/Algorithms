#include <iostream>

int main(){
    double x, y, result;

    std::cout << "Masukkan nilai x dan y : ";
    std::cin >> x;
    std::cin >> y;

    std::cout << '\n';

    std::cout << "~~~ Pilih Operasi ~~~" << '\n';
    std::cout << "1. Penjumlahan\n";
    std::cout << "2. Pengurangan\n";
    std::cout << "3. Perkalian\n";
    std::cout << "4. Pembagian\n";
    std::cout << "5. Sisa Bagi\n";

    short int choose;
    std::cout << "Masukkan pilihan anda : ";
    std::cin >> choose;

    if (choose == 1) {
        result = x + y;
        std::cout << "Result : " << result << '\n';
    }
    if (choose == 2) {
        result = x - y;
        std::cout << "Result : " << result << '\n';
    }


    return 0;
}