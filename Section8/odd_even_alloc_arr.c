#include <stdlib.h>
#include <stdio.h>

void seperate_array(int *arr, int size, int **odd_arr, int **even_arr)
{
    int len_odd;
    int len_even;
    int i;
    int odd;
    int even;

    len_even = 0;
    len_odd = 0;
    i = 0;
    while (i < size)
    {
        if (arr[i] % 2 == 0)
            len_even++;
        else
            len_odd++;
        i++;
    }
    *odd_arr = (int *)malloc(sizeof(int) * len_odd);
    *even_arr = (int *)malloc(sizeof(int) * len_even);
    if (!odd_arr || !even_arr)
    {
        free(odd_arr);
        free(even_arr);
        return;
    }
    i = 0;
    odd = 0;
    even = 0;
    while (i < size)
    {
        if (arr[i] % 2 == 0)
        {
            (*even_arr)[even] = arr[i];
            even++;
        }
        else
        {
            (*odd_arr)[odd] = arr[i];
            odd++;
        }
        i++;
    }
}

// int main(void)
// {
//     int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int *odd_arr;
//     int *even_arr;
//     int i;

//     seperate_array(arr, 10, &odd_arr, &even_arr);
//     i = 0;
//     while (i < 5)
//     {
//         printf("%d\n", odd_arr[i]);
//         i++;
//     }
//     i = 0;
//     while (i < 5)
//     {
//         printf("%d\n", even_arr[i]);
//         i++;
//     }
//     free(odd_arr);
//     free(even_arr);
//     return (0);
// }