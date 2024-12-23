#include <stdlib.h>
#include <stdio.h>

int **create_2d_arr(int height, int width)
{
    int **arr;
    int i;

    arr = (int **)malloc(sizeof(int *) * height);
    if (!arr)
        return (NULL);
    i = 0;
    while (i < height)
    {
        arr[i] = (int *)calloc(width, sizeof(int));
        if (!arr[i])
            return (NULL);
        i++;
    }
    return (arr);
}

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