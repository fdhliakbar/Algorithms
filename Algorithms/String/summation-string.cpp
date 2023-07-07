#include <iostream>
using namespace std;

string Stringsummation(string kata1, string kata2){
    return kata1 + " " + kata2;
}


int main(){
    string kata1 = "hello", kata2 = "world";

    string resultString = Stringsummation(kata1,kata2);

    cout << "Hasil: " << resultString << endl;
    return 0;
}