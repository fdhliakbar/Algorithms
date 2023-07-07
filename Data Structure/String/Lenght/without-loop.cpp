#include <iostream>
using namespace std;

void LengthofString(int count,char *words){
	if (words[count] == '\0'){
		cout << count;
		return;
	}
	
	LengthofString(count+1,words);
}

int main(){
    char words[100];

    cout << "Masukkan kata : "; cin >> words[0];

    LengthofString(0, words);
}