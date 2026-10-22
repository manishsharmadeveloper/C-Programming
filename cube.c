#include <stdio.h>
int main() {

    int number, cube;

    printf("enter a number : ");
    scanf("%d",&number);

    cube = number * number * number;
    printf("cube of number %d is : %d",number,cube);


    return 0;
}