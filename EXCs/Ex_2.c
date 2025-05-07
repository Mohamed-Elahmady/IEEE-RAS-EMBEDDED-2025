#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y);

int main(){
    int arr_2d[3][3]={{9,8,7}, {5, 4, 6}, {1, 2, 3}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = j; k < 3; k++)
            {
                if (arr_2d[j][i] > arr_2d[k][i])
                {
                    swap(&arr_2d[j][i], &arr_2d[k][i]);
                }
            }
            
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",arr_2d[i][j]);
        }
        printf("\n");
    }
    
    
}

void swap(int *x, int *y){
    *x ^= *y;
    *y ^= *x;
    *x ^= *y; 
}