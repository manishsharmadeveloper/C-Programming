#include <stdio.h>
int main() {

    int num1, num2, temp;

    num1 = 10;
    num2 = 20;

    printf("number 1 : %d",num1);
    printf("\nnumber 2 : %d",num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nafter swap number number\n");
    printf("number 1 : %d",num1);
    printf("\nnumber 2 : %d",num2);

    return 0;
}