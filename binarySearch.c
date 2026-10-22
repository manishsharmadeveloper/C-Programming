#include <stdio.h>
int main() {

    int arr[] = {2,4,6,8,10,12,14,16,18,20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 14;
    int left = 0;
    int right = n - 1;
    int found = 0;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            printf("elements %d found at index %d",target,mid);
            found = 1;
            break;
        } else if (arr[mid] < target)
        {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    if (!found)
    {
        printf("elements %d not found in the array",target);
    }
    

    return 0;
}