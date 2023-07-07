#include <stdio.h>

int main(){
    int number1,number2,number3;
    int min;

    scanf("%d",&number1);
    scanf("%d",&number2);
    scanf("%d",&number3);

    if(number1 <= number2 && number1 <= number3){
        min = number1;
    } else if(number2 <= number3){
        min = number2;
    } else {
        min = number3;
    }

    printf("%d\n", min);
    return 0;
}