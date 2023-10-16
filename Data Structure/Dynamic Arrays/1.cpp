#include <iostream>
using namespace std;

void DynamicArrays(){
}


int main(){
    int x,n;

    cout << "Masukkan jumlah item: " << '\n';
    cin >> n;

    int *arr = new int(n);

    cout << "Masukkan " << n << " item" << endl;

    for (x = 0; x< n; x++) {
        cin >> arr[x];
    }
    cout << "Output: ";
    for (x = 0; x < n; x++) {
        cout << arr[x] << " ";
    }
    return 0;
}