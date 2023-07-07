#include <iostream>
#include <string>
using namespace std;

int main(){
    string prodi = "informatika";
    string searchKey = "forma";
    int amountApper = 0;

    size_t pos = prodi.find(searchKey);

    for(int i = 0; i < prodi.length(); i++){
        if(prodi.substr(i, searchKey.length()) == searchKey){
            cout << "Ditemukan di indeks: " << i << '\n';
            break;
        }
    }

    return 0;
}
