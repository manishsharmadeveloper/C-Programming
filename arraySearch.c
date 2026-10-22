#include <stdio.h>
int main()
{

    int search;
    int arr[10] = {20, 10, 9, 3, 2, 11, 13, 89, 90, 33};

    printf("array : \n");
    printf("%d ", arr[0]);
    printf("%d ", arr[1]);
    printf("%d ", arr[2]);
    printf("%d ", arr[3]);
    printf("%d ", arr[4]);
    printf("%d ", arr[5]);
    printf("%d ", arr[6]);
    printf("%d ", arr[7]);
    printf("%d ", arr[8]);
    printf("%d ", arr[9]);

    printf("\nenter a number for search from array : ");
    scanf("%d", &search);

    if (arr[0] == search)
    {
        printf("number is founded in array");
    }
    else if (arr[1] == search)
    {
        printf("number is founded in array");
    }
    else if (arr[2] == search)
    {
        printf("number is founded in array");
    }
    else if (arr[3] == search)
    {
        printf("number is founded in array");
    } else if (arr[4] == search)
    {
        printf("number is founded in array");
    } else if (arr[5] == search)
    {
        printf("number is founded in array");
    } else if (arr[6] == search)
    {
        printf("number is founded in array");
    } else if (arr[7] == search)
    {
        printf("number is founded in array");
    } else if (arr[8] == search)
    {
        printf("number is founded in array");
    } else if (arr[9] == search)
    {
        printf("number is founded in array");
    } else {
        printf("number does not exists");
    }
    
    return 0;
}