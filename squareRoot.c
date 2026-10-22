#include <stdio.h>
int main() {

    int number, sqrt;
    printf("enter a number : ");
    scanf("%d",&number);

    sqrt = number * number;
    printf("square number of %d is : %d",number,sqrt);

    return 0;
}