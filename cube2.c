#include <stdio.h>
#include <math.h>
int main() {

    int number, cube;
    printf("enter a number : ");
    scanf("%d",&number);

    cube = cbrt(number);

    printf("cube root of %d is : %d",number, cube);


    return 0;
}