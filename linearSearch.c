#include <stdio.h>
int main() {

    int range, i, x, k, search;
    int ageArray[100];

    printf("enter a range : ");
    scanf("%d",&range);

    for (x = 0; x < range; x++)
    {
        printf("enter a number %d : ",x + 1);
        scanf("%d",&ageArray[x]);
    }

    printf("\narray : \n");
    for (i = 0; i < range; i++)
    {
        printf("%d ",ageArray[i]);
    }

    printf("\nenter a number that you want to search from array : ");
    scanf("%d",&search);

    for (k = 0; k < range; k++)
    {
        if (ageArray[k] == search)
        {
            printf("number is founded %d and its positions is %d",search,k + 1);
        }
        
    }
    

    return 0;
}