#include <stdio.h>
#define MAX_SIZE 5
int main() {

    int stack[MAX_SIZE];
    int top = -1;

    for (int i = 0; i < MAX_SIZE; i++)
    {
        stack [++ top] = i * 10;
    }

    printf("stack before deletion :");
    for (int i = top; i >= 0; i--)
    {
        printf("%d",stack[i]);
    }

    printf("\n");

    int numToDelete = 2;
    if (top - numToDelete < -1)
    {
        printf("error! not enough elements to delete : \n");
        return 1;
    }
    
    
    top -= numToDelete;
    printf("stack after deletion : \n");
    for (int i = top; i >= 0; i--)
    {
        printf("%d",stack[i]);
    }

    printf("\n");
    

    return 0;
}