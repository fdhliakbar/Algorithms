#include <iostream>
#include <cryptopp/rsa.h>
#include <cryptopp/osrng.h>
#include <cryptopp/base64.h>

int main() {
    // generate public key and private key
    CryptoPP::AutoSeededRandomPool rng;
    CryptoPP::RSA::PrivateKey privateKey;
    privateKey.GenerateRandomWithKeySize(rng, 2048);
    CryptoPP::RSA::PublicKey publicKey(privateKey);

    // plain text to be encrypted
    std::string plainText = "Hello, World!";

    // encryption with public key
    CryptoPP::RSAES_OAEP_SHA_Encryptor encryptor(publicKey);
    std::string encrypted;

    CryptoPP::StringSource(plainText, true,
        new CryptoPP::PK_EncryptorFilter(rng, encryptor,
            new CryptoPP::StringSink(encrypted)
        )
    );

    // print encrypted text
    std::cout << "Teks Cipher: " << CryptoPP::base64_encode(reinterpret_cast<const unsigned char*>(encrypted.data()), encrypted.size()) << std::endl;

    // description with private key
    CryptoPP::RSAES_OAEP_SHA_Decryptor decryptor(privateKey);
    std::string decrypted;

    CryptoPP::StringSource(encrypted, true,
        new CryptoPP::PK_DecryptorFilter(rng, decryptor,
            new CryptoPP::StringSink(decrypted)
        )
    );

    std::cout << "Teks Plain: " << decrypted << std::endl;

    return 0;
}
