#include <iostream>
using namespace std;

int main(){
    int arr[5] = {4,2,3,1,5};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < arrSize; i++){
        cout << arr[i] << " ";
    }
    cout << "\n\nAfter: ";
    for (int i = 0; i < arrSize; i++){
        for (int j = 0; j < arrSize; j++) {
            cout << endl;
        }
    }
}