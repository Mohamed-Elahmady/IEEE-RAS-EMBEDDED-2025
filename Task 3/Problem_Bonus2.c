#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int n,r_sum,c_sum;
bool flag = false;

void array_2d_init(int n, int arr[n][n]);
void print_2d_arr(int n, int arr[n][n]);

int main(){
    printf("Enter the size of the square: ");
    scanf("%d",&n);
    int mat1[n][n];
    printf("Enter the elements of the square: ");
    array_2d_init(n, mat1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            r_sum += mat1[i][j];
            c_sum += mat1[j][i];
        }
        if (r_sum == c_sum){
            flag = true;
        }
        else{
            flag = false;
            break;
        }    
    }
    printf("%s\n",(flag) ? "The square is a magic square." : "The square is not a magic square.");
    
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
