#include <stdio.h>
int main() {

    int a, b, temp;
    a = 5;
    b = 8;
    printf("original number : ");
    printf("\nA : %d",a);
    printf("\nB : %d",b);

    if (a < b)
    {
        temp = b;
        b = a;
        a = temp;
    }

    printf("\nafter sorting number : ");
    printf("\nA : %d",a);
    printf("\nB : %d",b);
    


    return 0;
}