#include <stdio.h>
int main() {

    int number,digit;

    printf("Enter a number: ");
    scanf("%d",&number);

    while ( number != 0){
        digit = number % 10 ;
        printf("%d",digit);
        number = number/10;
    }
    return 0;
}





