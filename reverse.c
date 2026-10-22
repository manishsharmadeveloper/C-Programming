#include <stdio.h>
int main() {

    int number, reverse;
    reverse = 0;

    printf("enter a number : ");
    scanf("%d",&number);

    printf("original number : %d ",number);

    while (number > 0)
    {
        reverse = reverse * 10 + number % 10;
        number = number/10;
    }
    printf("\nReverse Number : %d",reverse);
    

    return 0;
}