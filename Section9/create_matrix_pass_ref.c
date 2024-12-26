#include <stdio.h>
#include <stdlib.h>

void free_2d_arr(void **arr, int height)
{
    int i;

    i = 0;
    while (i < height)
    {
        free(arr[i]);
        i++;
    }
    free(arr);
}

void create_matrix_ref(int ***matrix, int size)
{
    int i;

    *matrix = (int **)malloc(sizeof(int *) * size);
    if (!(*matrix))
    {
        *matrix = NULL;
        return;
    }
    i = 0;
    while (i < size)
    {
        (*matrix)[i] = (int *)calloc(size, sizeof(int));
        if (!((*matrix)[i]))
        {
            while (i >= 0)
            {
                free((*matrix)[i]);
                i--;
            }
            *matrix = NULL;
            return;
        }
        i++;
    }
}

// int main(void)
// {
//     int **matrix;
//     int size = 5;
//     int i;
//     int j;

//     create_matrix_ref(&matrix, size);
//     i = 0;
//     while (i < size)
//     {
//         j = 0;
//         while (j < size)
//         {
//             printf("%d", matrix[i][j]);
//             j++;
//         }
//         printf("\n");
//         i++;
//     }
//     free_2d_arr((void**)matrix, size);
//     return (0);
// }