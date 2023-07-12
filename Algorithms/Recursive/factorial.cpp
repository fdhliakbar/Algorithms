#include <iostream>

int factorialSum(int N){
    if (N == 1) {
        return 1;
    } else {
        return N * factorialSum(N-1);
    }
}


int main(){
    int result = factorialSum(5);

    std::cout << result << std::endl;
}