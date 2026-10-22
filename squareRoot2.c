#include <stdio.h>
#include <math.h>
int main() {

    int number, square;
    printf("enter a number : ");
    scanf("%d",&number);

    square = sqrt(number);
    printf("square root of %d is : %d",number,square);

    return 0;
}