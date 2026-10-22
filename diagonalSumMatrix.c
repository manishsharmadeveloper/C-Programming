#include <stdio.h>
int main() {

    int row = 3;
    int col = 3;
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    int sum = 0;
    int size = 3;

    for (int i = 0; i < size; i++)
    {
        sum += matrix[i][i];
    }

    printf("sum of diagonal matrix : %d",sum);
    

    return 0;
}