#include <stdio.h>
int main() {

    int matrix1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int matrix2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    int row = 3;
    int col = 3;

    int newMatrix[row][col];

    printf("multiplication : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            newMatrix[i][j] = (matrix1[i][0] * matrix2[0][j]) + (matrix1[i][1] * matrix2[1][j]) + (matrix1[i][2] * matrix2[2][j]);
            printf("%3d ",newMatrix[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}