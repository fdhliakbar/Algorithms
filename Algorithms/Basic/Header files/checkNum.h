bool isOdd(int number){
    return number % 2 == 0;
}

bool isEven(int number){
    return number % 2 == 1;
}

bool isPrime(int number){
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}