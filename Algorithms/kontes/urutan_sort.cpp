#include <bits/stdc++.h>

/*
    Deskripsi
    - Program yang melakukan pengurutan N(2<=N<=1000)

    Format Masukkan
    - Baris pertama berisi satu buah bilangan N
    - baris kedua berisi N buah bilangan bulat Xi
    - Setiap bilangan dipastikan hanya antara 0-100
*/


int main(){
    int N;
    std::cin>>N;

    std::vector<int> numbers(N);
    for(int i=0;i<N;i++){
        std::cin>>numbers[i];
    }

    // Sort functions from the library algorithm
    std::sort(numbers.begin(), numbers.end());

    for(int i=0;i<N;i++){
        std::cout<<numbers[i]<<" ";
    }
    std::cout<<'\n';
    return 0;
}