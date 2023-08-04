#include <iostream>
using namespace std;

int convertToCosinus(const short int alpha) {

}

int translationsRotaions(short int A[], short int p[]) {
    short int result;
    for (int i = 0; i < 2; i++) {
        if (i == 0) {
            A[0] -= p[0];
            A[1] -= p[1];
        }

    }

    if (result < 0) {
        cout << "Ok" << '\n';
    }
}

int main(){
    short int A[2] = {3, 4};
    short int centerPoint[2] = {2, -3};
    short int alpha = 90;
    return 0;
}