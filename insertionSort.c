#include <stdio.h>
int main() {

    int n, i, j, temp, right;

    printf("enter the number of elements : ");
    scanf("%d",&n);

    int arr[n];
    printf("enter %d array elements\n",n);
    for (i = 0; i < n; i++)
    {
        scanf("%d",arr[i]);
    }

    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;


    while (j >= 0 && arr[j] > temp)
    {
        arr[j + 1] = arr[j];
        j--;
    }

    else {
        right = mid - 1;
    }
}
    
if (!foud)
{
    /* code */
}


    return 0;
}