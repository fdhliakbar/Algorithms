#include <iostream>
using namespace std;

void isOdd(int number){
  if(number % 2 == 1){
    cout<<"isOdd\n";
  }
}

void isEven(int number){
  if(number % 2 == 0){
    cout<<"isEven\n";
  }
}

void isPrime(int number){
   bool prima = true;
  if (number == 0 || number == 1) {
    prima = false;
  }
  else {
    for (int i = 2; i <= number / 2; i++) {
      if (number % i == 0) {
        prima = false;
        break;
      }
    }
  }
  if (prima)
    cout << "Prima\n";
}

int main(){
  int number;
  cin>>number;

  isOdd(number);
  isEven(number);
  isPrime(number);
  return 0;
}