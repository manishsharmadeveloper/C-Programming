#include <stdio.h>
int main() {

    int arr[5] = {1,2,3,4,5};
    int size = 5;

    int left, right, search, mid;
    left = 0;
    right = size - 1;

    search = 41;

    int found = 0;

    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }

    while (left <= right)
    {
        mid = (left + right) / 2;
        if (arr[mid] == search)
        {
            printf("\nnumber %d is founded at position ",search);
            found = 1;
            break;
        } else if (arr[mid] < search)
        {
            left = mid  + 1;
        } else {
            right = mid - 1;
        }
    }
    
    if (!found)
    {
        printf("number not found in the array");
    }
    
    


    return 0;
}