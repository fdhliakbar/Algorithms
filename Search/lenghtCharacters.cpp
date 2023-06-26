#include <bits/stdc++.h>

using namespace std;

void findCharacters(char inputChar[], char findChar[]) {
    int length = strlen(inputChar);
    char* ptr = strstr(inputChar, findChar);
    if(ptr){
        int index = ptr - inputChar;
        cout<<"Panjang string adalah "<<length<<"\n";
        cout<<"'"<<findChar<<"' ditemukan di indeks ke-"<<index<<" dari total "<<length<<" karakter."<<"\n\n";
    } else{
        cout<<"Substring tidak ditemukan dalam string."<<"\n\n";
    }
}

void combineCharacters(char inputChar[]){
    char secondChar[100];

    cout<<"Masukkan string kedua bre: ";
    cin.getline(secondChar, 100);

    strcat(inputChar, " ");
    strcat(inputChar, secondChar);

    cout<<"\nHasil kombinasi : "<<inputChar<<"\n\n";
}

int main(){
    char inputChar[100];
    char findChar[100];
    int getUserInput;
    bool repeat = true;

    while(repeat){
        cout<<"===== PILIHAN ====="<<'\n';
        cout<<"1. Kombinasi\n2. Mencari karakter\nJika ingin mengakhiri program \"stop\"\n";
        cout<<"Pilihan anda: "; cin>>getUserInput;
        cout<<'\n';

        if (getUserInput == 1) {
            cout<<"Masukkan string: ";
            cin.ignore();
            cin.getline(inputChar, 100);
            combineCharacters(inputChar);
        } else if (getUserInput == 2) {
            cout<<"Masukkan string: ";
            cin.ignore();
            cin.getline(inputChar, 100);

            cout<<"Masukkan substring yang dicari: ";
            cin>>findChar;
            findCharacters(inputChar, findChar);
        } else {
            repeat = false;
        }
    }

    return 0;
}
