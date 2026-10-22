#include <stdio.h>

#define MAX_SIZE 5

void push(int stack[], int *top, int value)
{
    if (*top == MAX_SIZE - 1)
    {
        printf("Stack overflow\n");
        return;
    }

    stack[++(*top)] = value;
}

int pop(int stack[], int *top)
{
    if (*top == -1)
    {
        printf("Stack underflow\n");
        return -1;
    }

    return stack[(*top)--];
}

void sortStack(int stack[], int *top)
{
    int tempStack[MAX_SIZE];
    int tempTop = -1;

    while (*top != -1)
    {
        int temp = pop(stack, top);

        while (tempTop != -1 && tempStack[tempTop] > temp)
        {
            push(stack, top, pop(tempStack, &tempTop));
        }

        push(tempStack, &tempTop, temp);
    }

    while (tempTop != -1)
    {
        push(stack, top, pop(tempStack, &tempTop));
    }
}

int main()
{
    int stack[MAX_SIZE] = {30, 10, 50, 20, 40};
    int top = MAX_SIZE - 1;

    sortStack(stack, &top);

    printf("Sorted stack: ");

    for (int i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }

    printf("\n");

    return 0;
}
