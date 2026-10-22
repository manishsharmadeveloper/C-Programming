#include <stdio.h>
int main() {

    int array[10][10];
    int i, j, n, sum = 0;

    printf("enter the order of square matrix : ");
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("enter the elements of the square matrix : ");
            scanf("%d",&array[i][j]);
        }
        
    }

    for (i = 0; i <= n; i++)
    {
        sum += array[i][j];
        printf("the trace of the matrix is :  %d\n",sum);
    }
    
    

    return 0;
}