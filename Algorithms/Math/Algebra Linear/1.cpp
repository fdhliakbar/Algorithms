#include <iostream>
using namespace std;

float tambah(float hasil){
    return (hasil * 10) / 3;
}

int main(){
    float hasil;

    cout << "hasil: "; cin >> hasil;
    float result = tambah(hasil);

    cout << result << endl;
    return 0;
}