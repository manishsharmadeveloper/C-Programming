#include <stdio.h>
#define MAX_SIZE 5

int binarySearch(int stack[], int target, int low, int high) {
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (stack[mid] == target)
        {
            return mid;
        } else if (stack[mid] < target)
        {
            low = mid + 1;
        } else {
            high = mid - 1;
        }  
    }

    return -1;
    
}

int main() {

    int stack[MAX_SIZE] = {10,20,30,40,50};
    int target = 30;
    int index = binarySearch(stack, target, 0, MAX_SIZE-1);

    if (index != -1)
    {
        printf("element %d found at index %d :",target,index);
    } else {
        printf("element %d not found in the stack",target);
    }
    

    return 0;
}