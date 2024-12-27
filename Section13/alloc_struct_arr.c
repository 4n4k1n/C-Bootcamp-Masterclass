#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
} Cords;

Cords *cords_arr(int size)
{
    Cords *arr;

    arr = (Cords *)malloc(sizeof(Cords) * size);
    return (arr);
}

void fill_strct_arr(Cords *arr, int size)
{
    int i;

    i = 0;
    while (i < size)
    {
        printf("X:%d = ", i + 1);
        scanf("%d", &arr[i].x);
        printf("Y:%d = ", i + 1);
        scanf("%d", &arr[i].y);
        i++;
    }
    printf("\n");
}

// int main(void)
// {
//     Cords *arr;
//     int size = 3;
//     int i;

//     arr = cords_arr(size);
//     fill_strct_arr(arr, size);
//     i = 0;
//     while (i < size)
//     {
//         printf("X = %d\nY = %d\n", arr[i].x, arr[i].y);
//         i++;
//     }
//     return (0);
// }
