#include <stdio.h>
int main() {

    int number;
    int fact = 1;

    printf("enter a number : ");
    scanf("%d",&number);

    for (int i = 1; i <= number; i++)
    {
        fact = fact * i;
    }

    printf("factorial of %d number is : %d",number, fact);
    

    return 0;
}