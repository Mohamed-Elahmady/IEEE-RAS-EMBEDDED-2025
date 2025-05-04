#include <stdio.h>
#include <stdlib.h>

int row,col;

void matrix_init(int row, int col, int mat[row][col]);
void matrix_print(int row, int col, int mat[row][col]);
void multiply_matrices(int row, int col, int mat1[row][col],int mat2[row][col]);    

int main(){
    scanf("%d %d",&row, &col);
    int mat1[row][col],mat2[row][col];
    matrix_init(row, col, mat1);
    matrix_init(row, col, mat2);
    multiply_matrices(row, col, mat1, mat2);
    return 0;
}

void matrix_init(int row, int col, int mat[row][col]){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
}

void matrix_print(int row, int col, int mat[row][col]){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

void multiply_matrices(int row, int col, int mat1[row][col],int mat2[row][col]){
    int mat_sum[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mat_sum[i][j] = 0;
            for (int k = 0; k < row; k++)
            {
                mat_sum[i][j] += (mat1[i][k]*mat2[k][j]);
            }
        }
    }
    matrix_print(row, col, mat_sum);
}
