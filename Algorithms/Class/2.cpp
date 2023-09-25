#include <iostream>
using namespace std;

class Laptop {
    public:
        string merk;
        void nyalakan() {
            cout << "Laptop " << merk << " dinyalakan." << '\n';
        }
    private:
        int price;
        void repair() {
            cout << "Laptop " << merk << "sedang dalam perbaikan." << '\n';
        }

    protected:
        string jenisCpu;
        void upgradeProcessor() {
            cout << "Upgarde ke " << jenisCpu << '\n';
        }
}LaptopAcer;


int main() {
    LaptopAcer.merk = "Acer";
    LaptopAcer.nyalakan();
}