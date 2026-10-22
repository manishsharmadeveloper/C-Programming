#include <stdio.h>
int main() {

    int stackArray[5];

    for (int i = 0; i < 5; i++)
    {
        stackArray[i] = i * 10;
    }

    printf("Array Elements : ");
    for (int j = 0; j < 5; j++)
    {
        printf("%d",stackArray[j]);
    }
    printf("\n");
    
    

    return 0;
}