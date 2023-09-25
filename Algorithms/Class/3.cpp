#include <iostream>
using namespace std;

class Iterative {
public:
    void reversalValues(int values[], int n) {
        int start = 0;
        int end = n - 1;

        while (start < end) {
            int temp = values[start];
            values[start] = values[end];
            values[end] = temp;
            start++;
            end--;
        }
    }

    void printValues(int values[], int n) {
        for (int i = 0; i < n; i++) {
            cout << values[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int values[5] = {1, 2, 3, 4, 5};
    int n = sizeof(values) / sizeof(values[0]);

    Iterative IterativeReversal; // Membuat objek dari kelas Iterative

    cout << "Data awal: ";
    IterativeReversal.printValues(values, n);

    // Memanggil metode reversalValues untuk membalikkan data
    IterativeReversal.reversalValues(values, n);

    cout << "Data setelah dibalik: ";
    IterativeReversal.printValues(values, n);

    return 0;
}
