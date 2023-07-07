#include <iostream>
#include <string>
using namespace std;

void withPosition(string txt){
    cout << "Before: " << txt << '\n';

    txt.erase(2);
    cout << "After: " << txt << '\n';
}

void withoutUsingPos(string txt){
    cout << "Before: " << txt << '\n';

    txt.erase();
    cout << "After: " << txt;
}

void indexAndLength(string txt){
    cout << "Before: " << txt << '\n';
    txt.erase(2, 4);
    cout << "After (2, 4): " << txt;
}
int main(){
    string str = "hello my name is gustavo";

    //withPosition(str);
    //withoutUsingPos(str);
    indexAndLength(str);
    return 0;
}