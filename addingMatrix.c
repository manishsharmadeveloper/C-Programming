#include <stdio.h>
int main() {

    int matrix1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int matrix2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    int row = 3;
    int col = 3;

    printf("addition : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matrix1[i][j] += matrix2[i][j];
            printf("%3d",matrix1[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}