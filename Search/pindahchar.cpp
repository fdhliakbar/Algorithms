#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> numbers {1, 2, 3, 4, 5};
    int value = 7;
    int target_index = 2;

    if (target_index < numbers.size()) {
    numbers.insert(numbers.begin() + target_index, value);
    } else {
    numbers.push_back(value);
    }


    cout<<"Hasil Perubahan: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    return 0;
}
