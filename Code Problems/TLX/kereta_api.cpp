#include <iostream>
#include <vector>

int main() {
    short int N;
    std::cin >> N;

    std::vector<int> gerbong(N);
    for (int i = 0; i < N; ++i) {
        std::cout << i + 1 << " ";
        gerbong[i] = i + 1;
    }

    for (int i = 0; i < N / 2; ++i) {
        int temp = gerbong[i];
        gerbong[i] = gerbong[N - i - 1];
        gerbong[N - i - 1] = temp;
    }

    std::cout << '\n';

    for (int i = 0; i < N; ++i) {
        std::cout << gerbong[i];
        if (i != N - 1) {
            std::cout << ",";
        }
    }
    std::cout << '\n';

    return 0;
}
