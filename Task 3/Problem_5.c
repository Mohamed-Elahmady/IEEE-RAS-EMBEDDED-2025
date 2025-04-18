#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define matrix 5

int n, main_dia = 0, sec_dig = 0;
void array_2d_init(int n, int arr[n][n]);
void print_2d_arr(int n, int arr[n][n]);

int main(){
    scanf("%d",&n);
    int mat1[n][n];
    array_2d_init(n, mat1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == j){
                main_dia += mat1[i][j];
            }
            if (i == n-j-1)
            {
                sec_dig += mat1[i][j];
            }
        }
    }
    printf("%d",abs(main_dia-sec_dig));

    return 0;
}

void array_2d_init(int n, int arr[n][n]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        } 
    }
}

void print_2d_arr(int n, int arr[n][n]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        } 
        printf("\n");
    }
    
}
