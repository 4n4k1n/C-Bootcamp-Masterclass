#include <stdlib.h>
#include <stdio.h>
#include "total_dym_arr.h"

int **up_tri_matrix(int height)
{
    int i;
    int **matrix;

    matrix = (int **)malloc(sizeof(int *) * height);
    if (!matrix)
        return (NULL);
    i = 0;
    while (i < height)
    {
        matrix[i] = (int *)calloc(i + 1, sizeof(int));
        if (!matrix[i])
            return (NULL);
        i++;
    }
    return (matrix);
}

int **down_tri_matrix(int height)
{
    int i;
    int j;
    int **matrix;

    matrix = (int **)malloc(sizeof(int *) * height);
    if (!matrix)
        return (NULL);
    i = 0;
    j = height;
    while (i < height)
    {
        matrix[i] = (int *)calloc(j, sizeof(int));
        if (!matrix[i])
            return (NULL);
        i++;
        j--;
    }
    return (matrix);

}

int main(void)
{
    int **matrix_up;
    int height = 5;
    int i;
    int j;
    int k;

    matrix_up = up_tri_matrix(height);
    if (!matrix_up)
    {
        free_2d_arr((void**)matrix_up, height);
    return (1);
    }
    i = 0;
    while (i < height)
    {
        j = 0;
        while (j < i + 1)
        {
            printf("%d", matrix_up[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    printf("\n");
    free_2d_arr((void**)matrix_up, height);
    matrix_up = down_tri_matrix(height);
    if (!matrix_up)
    {
        free_2d_arr((void**)matrix_up, height);
    return (1);
    }
    i = 0;
    k = height;
    while (i < height)
    {
        j = 0;
        k = height - i;
        while (k > 0)
        {
            printf("%d", matrix_up[i][j]);
            k--;
            j++;
        }
        printf("\n");
        i++;
    }
    free_2d_arr((void**)matrix_up, height);
    return (0);
}