#include <stdio.h>
int main() {

    int number1, number2;
    printf("enter the first number value : ");
    scanf("%d",&number1);

    printf("enter the second number value : ");
    scanf("%d",&number2);

    if (number1 == number2)
    {
        printf("Yes! this equal number");
    } else {
        printf("not valid number!");
    }
    

    return 0;
}