#include <iostream>

class ChainsawmanGirls {
    public:
        std::string name[2][3] = {
            {"Makima", "Rize", "Yoru"},
            {"power", "Angel", "Naouya"},
        };
        int age[2][3] = {
            {25, 22, 18},
            {18, 17, 12}
        };

        void printChars() {
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 3; j++) {
                    std::cout << name[i][j] << "'s age is " << age[i][j] << std::endl;
                }
            }
        }
};

int main() {
    ChainsawmanGirls girls;
    girls.printChars();
    return 0;
}
