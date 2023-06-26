#include <bits/stdc++.h>

using namespace std;

void findCharacters(char inputChar[], char findChar[]) {
    int length = strlen(inputChar);
    char* ptr = strstr(inputChar, findChar);
    if(ptr){
        int index = ptr - inputChar;
        cout<<"Panjang string adalah "<<length<<endl;
        cout<<"'"<<findChar<<"' ditemukan di indeks ke-"<<index<<" dari total "<<length<<" karakter."<<endl;
    } else{
        cout<<"Substring tidak ditemukan dalam string."<<endl;
    }
}

int main(){
    char inputChar[100];
    char findChar[100];

    cout<<"Masukkan string: ";
    cin.getline(inputChar, 100);

    cout<<"Masukkan substring yang dicari: ";
    cin>>findChar;

    findCharacters(inputChar, findChar);

    return 0;
}
