#include <iostream>
using namespace std;

int getStringLength(string strings){
    int length = 0;
    while (strings[length] != '\0'){
        length = length + 1;
    }
    return length;
}

string delString(string lastSlice){
    int lastSliceLength = getStringLength(lastSlice);
    string deletedString = "";
    for (int kar = 1; kar < lastSliceLength; kar++)
    {
        deletedString = deletedString + lastSlice[kar];
    }
    return deletedString;
}

void findSubstring(string nama, string keyword){
    string slices[5];
    int indexes[2];
    bool found = false;
    string lastSlice = "";
    int strLength = getStringLength(nama);
    int keywordLength = getStringLength(keyword);
    
    for (int i =0; i < strLength; i++){
        lastSlice = lastSlice + nama[i];
        int lastSliceLength = getStringLength(lastSlice);

        if (lastSliceLength == keywordLength && lastSlice != keyword){
            lastSlice = delString(lastSlice);
            slices[i] = lastSlice;
        }
        if (lastSliceLength == keywordLength && lastSlice == keyword){
            int startIndex = (i - keywordLength ) + 1;
            int lastIndex = i;
            cout << "keyword" << " " << keyword << " ditemukan pada indeks " << startIndex << " - " << lastIndex << " dari string " << nama;
            break;
        }
    }
    
}

int main(){
    string name = "Ardiansyah";
    string keyword = "dian";
    findSubstring(name, keyword);
} 