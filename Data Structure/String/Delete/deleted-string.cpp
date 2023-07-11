#include <iostream>

void delString(std::string words, int lenWords){
    for (int i = 0; i < lenWords; i++) {
        for (int j = 0; j < lenWords; j++) {
            std::cout << "hello";
        }
    }
}

int main(){
    std::string words = "hello world";

    delString(words, 11);
}