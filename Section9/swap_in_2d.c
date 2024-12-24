#include "total_dym_arr.h"
#include <stdio.h>

void swich_rows_matrix(void **matix, int row1, int row2)
{
    void *temp;

    temp = matix[row1];
    matix[row1] = matix[row2];
    matix[row2] = temp;
}

void swich_cols_matix(int **matrix, int height, int col1, int col2)
{
    int temp;
    int i;

    i = 0;
    while (i < height)
    {
        temp = matrix[i][col1];
        matrix[i][col1] = matrix[i][col2];
        matrix[i][col2] = temp;
        i++;
    }
}

int main (void)
{
    int height = 5;
    int width = 5;
    int **arr;
    int i;
    int j;

    arr = create_2d_arr(height, width);
    if (!arr)
        free_2d_arr((void **)arr, height);
    arr[1][1] = 1;
    arr[2][2] = 2;
    i = 0;
    while (i < height)
    {
        j = 0;
        while (j < width)
        {
            printf("%d", arr[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    printf("\n");
    // swich_cols_matix(arr, height, 1, 2);
    swich_rows_matrix((void**)arr, 1, 2);
    i = 0;
    while (i < height)
    {
        j = 0;
        while (j < width)
        {
            printf("%d", arr[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    free_2d_arr((void **)arr, height);
    return (0);
}
