#include <stdio.h>
int main() {

    int temp, search, update_number, new_number;
    int numberArray[100];
    int range;

    printf("enter a range : ");
    scanf("%d",&range);

    for (int i = 0; i < range; i++)
    {
        printf("enter a elements number %d : ",i + 1);
        scanf("%d",&numberArray[i]);
    }

    printf("\narray : \n");
    for (int j = 0; j < range; j++)
    {
        printf("%d ",numberArray[j]);
    }

    printf("\n\nenter a number search : ");
    scanf("%d",&search);

    for (int k = 0; k < range; k++)
    {
        if (numberArray[k] == search)
        {
            printf("successfully! number are present");
            break;
        } 
    }

    printf("\n\ndo you want to update number in array : \n");
    printf("1.yes\n");
    printf("2.no\n");
    
    
    printf("enter a number value : ");
    scanf("%d",&update_number);

    if (update_number == 1)
    {
        printf("great! you have selected yes\n\n");
        printf("enter a new number : ");
        scanf("%d",&new_number);

    for (int i = 0; i < range + 1; i++)
    {
        numberArray[i] = new_number;
    }

    printf("successfully! your data has been updated in the array : \n");

    printf("update list : \n");
    for (int m = 0; m < range + 1; m++)
    {
        printf("%d ",numberArray[m]);
    }
} else if (update_number == 2)
{
    printf("okay! you have selected no : ");
} else {
    printf("sorry please try again later after 2 hours");
}


    return 0;
}