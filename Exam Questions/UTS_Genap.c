#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n <= 1)
        return 0;
    
    int sqrtN = sqrt(n);
    for (int i = 2; i <= sqrtN; i++) {
        if (n % i == 0)
            return 0;
    }
    
    return 1;
}

void processArrayValues(int values[], int size) {
    for (int i = 0; i < size; i++) {
        int value = values[i];
        int isValuePrime = isPrime(value);
        
        printf("Nilai: %d adalah ", value);
        if (isValuePrime)
            printf("bilangan prima.\n");
        else
            printf("bukan bilangan prima.\n");
    }
}

int main() {
    int values[4] = {2, 7, 11, 15};
    int size = sizeof(values) / sizeof(values[0]);
    
    processArrayValues(values, size);
    
    return 0;
}
