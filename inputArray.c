#include <stdio.h>
int main() {

    int range;
    int array[10];

    printf("enter a range : ");
    scanf("%d",&range);

    for (int i = 0; i < range; i++)
    {
        printf("enter a matrix number %d : ",i + 1);
        scanf("%d",&array[i]);
    }

    printf("\nmatrix array : ");
    for (int j = 0; j < range; j++)
    {
        printf("%d ",array[j]);
    }    

    return 0;
}