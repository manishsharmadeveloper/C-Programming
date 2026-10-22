#include <stdio.h>
int main() {

    int tableNumber, i, range;
    range = 10;
    i = 1;

    printf("enter a table number : ");
    scanf("%d",&tableNumber);

    while (i <= range)
    {
        printf("%d",tableNumber * i);
        i = i + 1;
        printf("\n");
    }
    


    return 0;
}