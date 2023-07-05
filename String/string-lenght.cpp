#include <iostream>
using namespace std;


int lenString(string name) {
    int length = 0;

    while (name[length] != '\0') {
        length += 1;
    }
    return length;
}

int main(){
    string name = "Hello world";
    int length = lenString(name);

    cout << "jumlah karakter : " << length << '\n';
    return 0;
}