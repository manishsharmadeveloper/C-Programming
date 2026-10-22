#include <stdio.h>
int main() {

    int number_1, number_2;
    printf("enter a first number : ");
    scanf("%d",&number_1);

    printf("enter a second number : ");
    scanf("%d",&number_2);

    if (number_1 > number_2)
    {
        printf("number 2 is greater than number 1");
    } else if (number_1 == number_2)
    {
        printf("both number 1 and number 2 are equal");
    } else {
        printf("enter the valid number");
    }
    

    return 0;
}