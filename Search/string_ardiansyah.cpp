#include <iostream>
using namespace std;

int getStringLenght(string characters){

}

void delString(int startIndex, int lastIndex, string name){
    string deletedString = "";

    for (int kar = startIndex; kar < lastIndex; kar++){
        deletedString += name[kar];
    }

    cout << deletedString;
}

void findSubString(string name, string keyword){
    int slices[5];
    bool found = false;
}

int main(){
    string names = "Ardiansyah";
    string keyword = "dian";
    int startIndex = 6;
    int lastIndex = 9;

    //delString(startIndex, lastIndex, names);
    getStringLenght(keyword);

    return 0;
}