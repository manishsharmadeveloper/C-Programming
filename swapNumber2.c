#include <stdio.h>
int main() {
    int num1, num2;

    num1 = 10;
    num2 = 20;

    printf("number 1 : %d",num1);
    printf("\nnumber 2 : %d",num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("\nafter swap number : ");
    printf("\nnumber 1 : %d",num1);
    printf("\nnumber 2 : %d",num2);

    return 0;
}