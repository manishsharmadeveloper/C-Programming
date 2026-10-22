#include <stdio.h>
int main() {

    int x, range, temp, pos;
    int marks[10];

    printf("enter a range : ");
    scanf("%d",&range);

    for (int i = 0; i < range-1; i++)
    {
        printf("enter a number %d : ",i + 1);
        scanf("%d",&marks[i]);
    }

    printf("\noriginal array : ");
    for (int j = 0; j < range-1; j++)
    {
        printf("%d ",marks[j]);
    }
    
    printf("\nenter number insert in array : ");
    scanf("%d",&temp);

    printf("enter a position : ");
    scanf("%d",&pos);

    for (int p = range; p >= pos-1; p--)
    {
        marks[p + 1] = marks[p];
        marks[p - 1] = temp;
    }

    printf("after inserting elements in the array : ");
    for (int i = 0; i < range; i++)
    {
        printf("%d ",marks[i]);
    }
    

    return 0;
}