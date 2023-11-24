#include <iostream>
using namespace std;


int main(){
    int arr[5] = {1,5,4,3,2};

    for (auto i: arr) {
        cout << arr[i] << " ";
    }
    return 0;
}