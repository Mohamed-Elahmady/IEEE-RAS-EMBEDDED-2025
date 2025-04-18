#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define matrix 3

int mat1[matrix][matrix];
int mat2[matrix][matrix];
int sum_mat[matrix][matrix];

void array_2d_init(int arr[matrix][matrix]);
void print_2d_arr(int arr[matrix][matrix]);

int main(){
    array_2d_init(mat1);
    array_2d_init(mat2);
    for (int i = 0; i < matrix; i++)
    {
        for (int j = 0; j < matrix; j++)
        {
            sum_mat[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    print_2d_arr(sum_mat);
    
    return 0;
}

void array_2d_init(int arr[matrix][matrix]){
    for (int i = 0; i < matrix; i++){
        for (int j = 0; j < matrix; j++)
        {
            scanf("%d", &arr[i][j]);
        } 
    }
}

void print_2d_arr(int arr[matrix][matrix]){
    for (int i = 0; i < matrix; i++){
        for (int j = 0; j < matrix; j++)
        {
            printf("%d ", arr[i][j]);
        } 
        printf("\n");
    }
    
}
