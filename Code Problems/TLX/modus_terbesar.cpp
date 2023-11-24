#include <iostream>

int main() {
    int N, value, modus, biggest = 0;
    int arr[1001];

    for (int i = 0; i <= 1000; i++) {
        arr[i] = 0;
    }

    std::cin >> N;

    for (int i = 0; i < N; i++) {
        std::cin >> value;
        arr[value]++;
        if (arr[value] > biggest) {
            biggest = arr[value];
            modus = value;
        }
        if (arr[value] == biggest && modus < value) {
            modus = value;
            biggest = arr[value];
        }
    }
    std::cout << modus << '\n';

    return 0;
}