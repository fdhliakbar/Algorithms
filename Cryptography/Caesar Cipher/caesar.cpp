#include <iostream>
#include <string>

std::string caesarCipherEncrypt(std::string plaintext, int shift) {
    std::string ciphertext = "";
    
    for (char& c : plaintext) {
        // Menggeser karakter huruf kapital
        if (std::isupper(c)) {
            c = (c - 'A' + shift) % 26 + 'A';
        }
        // Menggeser karakter huruf kecil
        else if (std::islower(c)) {
            c = (c - 'a' + shift) % 26 + 'a';
        }
        
        ciphertext += c;
    }
    
    return ciphertext;
}

int main() {
    std::string plaintext;
    int shift;
    
    std::cout << "Masukkan teks: ";
    std::getline(std::cin, plaintext);
    
    std::cout << "Masukkan jumlah pergeseran: ";
    std::cin >> shift;
    
    std::string ciphertext = caesarCipherEncrypt(plaintext, shift);
    
    std::cout << "Hasil Enkripsi: " << ciphertext << std::endl;
    
    return 0;
}
