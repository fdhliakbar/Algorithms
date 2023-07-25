#include <iostream>

int main() {
    std::string firstName = "Charlotte", middleName = "Bronte", lastName = "Eyre";
    std::string fullName = firstName + " " + middleName + " " + lastName;

    std::string names[3] = {"Charlotte", "Bronte", "Eyre"};
    std::string fullName2 = names[0] + " " + names[1] + " " + names[2];

    // with loop
    for (int i = 0; i < 3; i++) {
        std::cout << names[i] << " ";
    }
}

