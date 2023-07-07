#include <iostream>

int main(){
    int values[5] = {10, 40, 21, 54, 12};
    int findValue;
    int size = sizeof(values) / sizeof(values[0]);

    std::cout << "Cari Nilai yang mau di cari: ";
    std::cin >> findValue;

    for(int i = 1; i <= size; i++){
        if (values[i] == findValue){
            std::cout << "Nilai yang mau di cari " << findValue << " ditemukan di index: " << i+1 << '\n';
            break;
        }
    }
    return 0;
}
