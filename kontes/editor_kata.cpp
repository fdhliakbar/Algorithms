#include <iostream>
#include <string>
using namespace std;

int main(){
    string teks;

    getline(cin, teks);

    if(teks.length() < 50) {
        // 1. Cari karakter + atau -
        // 2. Ubah karakter sebelumnya menjadi besar atau kecil
        // 3. Hapus karakter + atau -
        for(int i=0;i<teks.length();i++){
            if(teks[i] == '+') {
                teks[i-1] = toupper(teks[i-1]);
                // Hapus satu karakter pada indeks[i]
                teks.erase(i, 1);
            } else if(teks[i] == '-'){
                teks[i-1] = tolower(teks[i-1]);
                // Hapus satu karakter pada indeks[i]
                teks.erase(i, 1);
            }
        }

        // Cetak vairable teks
        cout<<teks<<'\n';

    } else {
        cout<<"Maksimal 49 karakter..."<<endl;
        return main();
    }
}