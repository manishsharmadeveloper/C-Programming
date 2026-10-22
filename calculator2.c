#include <stdio.h>
int main() {

    int a, b, c, d, e;
    printf("enter the value of a : ");
    scanf("%d",&a);

    printf("enter the value of b : ");
    scanf("%d",&b);

    c = a + b;
    d = a - b;
    e = a * b;

    printf("total additions is : %d",c);
    printf("\ntotal subtraction is : %d",d);
    printf("\ntotal multiplication is : %d",e);



    return 0;
}