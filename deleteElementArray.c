#include <stdio.h>
int main() {

    int arr[100], size, pos;

    printf("enter the size of the array : ");
    scanf("%d",&size);

    for (int i = 0; i < size; i++)
    {
        printf("enter %d elements : ",i + 1);
        scanf("%d",&arr[i]);
    }

    printf("enter the position of the element to delete : ");
    scanf("%d",&pos);

    if (pos < 0 || pos >= size)
    {
        printf("invalid position!");
    } else {
        for (int j = pos; j < size; j++)
        {
            arr[j] = arr[j + 1];
        }
        size --;
    }

    printf("elements at position %d deleted successfully!",pos);

    printf("updated array : ");
    for (int k = 0; k < size; k++)
    {
        printf("%d ",arr[k]);
    }

    printf("\n");


    return 0;
}