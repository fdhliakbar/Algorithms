#include <iostream>
using namespace std;

class Laptop {
    public:
        string ownedBy;
        string start () {
            return "Menyalakan laptop";
        }
    private:
        short int tanggalBeli = 12;
        string kodeLaptop = "K91-22-H172CP";
    protected:
        int batasUsia = 20;
}LaptopAnto, LaptopRudi;


int faktorial(int n) {
    if (n <= 1) return 1;
    else return n * faktorial(n - 1);
}

int main(){
    int angka = 5;
    int hasil = faktorial(angka);

    //cout << LaptopAnto.start() << endl;
    cout << "faktorial dari " << angka << " adalah:" << hasil << '\n';
    return 0;
}