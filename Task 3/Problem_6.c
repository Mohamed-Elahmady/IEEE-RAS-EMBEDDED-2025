#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define matrix 5

int row,col;
void array_2d_init(int row, int col , int arr[row][col]);
void print_2d_arr(int row, int col , int arr[row][col]);
void swap(int *x, int *y);

int main(){
    scanf("%d %d",&row, &col);
    int mat1[row][col];
    array_2d_init(row , col, mat1);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col/2; j++)
        {
            swap(&mat1[i][j], &mat1[i][col-j-1]); 
        }
    }
    print_2d_arr(row,col,mat1);

    return 0;
}

void array_2d_init(int row, int col , int arr[row][col]){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        } 
    }
}

void print_2d_arr(int row, int col , int arr[row][col]){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        } 
        printf("\n");
    }
    
}

void swap(int *x, int *y){
    *x ^= *y;
    *y ^= *x;
    *x ^= *y;
}