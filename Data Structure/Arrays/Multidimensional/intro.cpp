#include <iostream>

int main(){
    const short int MAX_ITERATION = 20;

    for (short int i = 1; i <= MAX_ITERATION; i++) {
        std::cout << i << " ";

        if (i == 10) {
            std::cout << '\n';
        }
    }


    return 0;
}