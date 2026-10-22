#include <stdio.h>
#define MAX_SIZE 5
int main() {

    int stack[MAX_SIZE];
    int top = -1;
    for (int i = 0; i < MAX_SIZE; i++)
    {
        stack[++top] = i * 10;
    }

    int target = 30;
    int found = 0;

    for (int i = 0; i <= top; i++)
    {
        if (stack[i] == target)
        {
            found = 1;
            break;
        }
    }
    
    if (!found)
    {
        printf("element %d found in the stack : ",target);
    } else {
        printf("elements %d not found in the stack : ",target);
    }
    
    


    return 0;
}