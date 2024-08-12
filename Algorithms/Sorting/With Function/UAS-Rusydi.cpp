/*

=========================================================================================

Diberikan data dalam array d sebagai berikut : 7 2 8 4 3 bila diurutkan 
dengan metode Rusydi maka langkah-langkahnya adalah : 

a. Tentukan jumlah data yaitu n=5, area yang diurutkan adalah dari awal =1, sampai akhir =5 
b. Tentukan indek dari nilai minimum (imin) dan maksimum (imax) dari area yang akan diurutkan dengan memanggil fungsi minmax(d, imin, imax)  
c. swap d[awal] dengan d[imin] dan swap d[max] dengan d[akhir] 
d. update area pencarian dengan awal=awal+1 dan akhir=akhir -1 
e. Jika awal<akhir ulangi ke Langkah b 
f. Array sudah dalam keadaan urut 

=========================================================================================

*/

#include <iostream>
using namespace std;

void minmax(int d[], int awal, int akhir, int &imin, int &imax) {
    imin = awal;
    imax = awal;
    for (int i = awal + 1; i <= akhir; i++) {
        if (d[i] < d[imin]) {
            imin = i;
        }
        if (d[i] > d[imax]) {
            imax = i;
        }
    }
}

void rusydiSort(int d[], int n) {
    int awal = 0;
    int akhir = n - 1;
    
    while (awal < akhir) {
        int imin, imax;
        minmax(d, awal, akhir, imin, imax);
        
        // Swap elemen minimum dengan elemen di posisi awal
        swap(d[awal], d[imin]);
        
        // Swap elemen maksimum dengan elemen di posisi akhir
        // Jika imax adalah awal, maka perlu disesuaikan
        if (imax == awal) {
            imax = imin;
        }
        swap(d[akhir], d[imax]);
        
        // Update area pencarian
        awal++;
        akhir--;
    }
}

int main() {
    int d[5] = {7, 2, 8, 4, 3}; // Ini adalah Array
    int n = sizeof(d) / sizeof(d[0]); // jumlah data dalam array d
    
    rusydiSort(d, n);
    
    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << d[i] << " ";
    }
    cout << endl;
    
    return 0;
}
