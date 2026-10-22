#include <stdio.h>

#define MAX_SIZE 5

int main()
{
    int stack[MAX_SIZE];
    int top = -1;

    // Insert initial elements
    for (int i = 0; i < 3; i++)
    {
        stack[++top] = i * 10;
    }

    printf("Stack before inserting: ");
    for (int i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");

    int numToInsert = 2;
    int newValue = 100;

    // Check whether there is enough space
    if (top + numToInsert >= MAX_SIZE)
    {
        printf("Error! Not enough space to insert elements.\n");
        return 1;
    }

    // Insert new elements
    for (int i = 0; i < numToInsert; i++)
    {
        stack[++top] = newValue;
    }

    printf("Stack after insertion: ");
    for (int i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");

    return 0;
}
