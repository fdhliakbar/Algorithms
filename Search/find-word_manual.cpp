#include <iostream>
using namespace std;

void findCharater(string inputUser, int startNumber){
    cout<<"Your namae is : "<<inputUser<<endl;
}


int main(){
    int lastIndex;
    int startIndex;
    string inputUser;

    cout<<"Masukkan nama anda : ";
    getline(cin, inputUser);

    int startNumber;

    findCharater(inputUser, startNumber);

    return 0;
}