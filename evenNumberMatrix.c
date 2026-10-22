#include <stdio.h>
int main() {

    int size, i, j, k;
    int arr[10];
    int even_number = 0;
    int odd_number = 0;

    printf("enter a size of array : ");
    scanf("%d",&size);


    for (i = 0; i < size; i++)
    {
        printf("enter a array element %d : ",i + 1);
        scanf("%d",&arr[i]);
    }
    
    printf("\nEven and odd Intergers array : \n");
    for (j = 0; j < size; j++)
    {
        printf("%d",arr[j]);
    }

    for (k = 0; k < size; k++)
    {
        if (arr[k] % 2 == 0)
        {
            printf("\n\nEven number : %d",arr[k]);
            even_number = even_number + arr[k];
        } else {
            printf("\n\nOdd Number : %d",arr[k]);
            odd_number = odd_number + arr[k];
        }
    }

    printf("\nThe Sum of even number : %d",even_number);
    printf("\nThe Sum of odd number : %d",odd_number);
    

    return 0;
}