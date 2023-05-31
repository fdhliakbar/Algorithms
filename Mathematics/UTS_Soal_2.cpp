#include <iostream>
using namespace std;

bool isEven(int number) {
    return number % 2 == 0;
}

void processValues(int values[], int targets[]) {
    for(int i = 0; i < 3; i++) {
        for(int j = i + 1; j < 4; j++) {
            int firstNumber = values[i];
            int secondNumber = values[j];
            int result = firstNumber + secondNumber;
            if(result <= targets[0] || result > targets[1]){
                cout << values[i] << " + " << values[j] << " = " << result << '\n';
                cout << isEven(values[i]) << ' ' << isEven(values[j]) << ' ' << isEven(result) << '\n';
                cout << '\n';
            }
        }
    }
}

int main() {
    int values[4] = {2, 7, 11, 15};
    int targets[2] = {15, 25};
    processValues(values, targets);
    return 0;
}
