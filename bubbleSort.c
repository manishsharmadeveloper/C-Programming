#include <stdio.h>
int main() {

    int range, temp;
    int array[10];

    printf("enter a array range : ");
    scanf("%d",&range);

    for (int i = 0; i < range; i++)
    {
        printf("enter a number %d : ",i + 1);
        scanf("%d",&array[i]);
    }

    for (int j = 0; j < range; j++)
    {
        for (int k = 0; k < range-1; k++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("\nafter sorting array : \n");
    for (int m = 0; m < range; m++)
    {
        printf("%d ",array[m]);
    }

    return 0;
}