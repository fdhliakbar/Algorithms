#include <iostream>
using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; i++) {
        // 15 % 4 == 0
        if (number % i == 0) return false;
    }
    return true;
}

void processValues(const int values[]) {
    int lenghtValues = sizeof(values) / sizeof(values[0]); //4

    for (int i = 0; i < lenghtValues; i++) {
        int value = values[i];
        cout << "Nilai: " << value;

        if (isPrime(value)) {
            cout << " prima" << endl;
        } else {
            cout << " bukan prima" << endl;
        }
    }
}

int main() {
    int values[4] = {2, 7, 11, 15};
    int targets [2] = {15, 25};
    processValues(values);

    return 0;
}
