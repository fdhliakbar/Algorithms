#include <iostream>

int main() {
    struct isoscelesTriangle {
        short int baseLength = 2;
        short int height = 1;
    };
    short int M, N;

    std::cin >> M >> N;

    if (N >= 2 && M <= 100) {
        isoscelesTriangle triangle;
        short int result = (N * triangle.height) + (M * triangle.baseLength);

        std::cout << "Result: " << result << std::endl;
    }
    else {
        std::cout << "Invalid input!" << std::endl;
    }

    return 0;
}
