#include <stdio.h>
#include <stdlib.h>

int *no_dubs(int *arr, int size)
{
    int *new_arr;
    int count;
    int save;
    int i;
    int j;
    int k;

    count = 0;
    i = 0;
    while (i < size)
    {
        j = 0;
        while (j < size)
        {
            if (arr[i] == arr[j] && i != j)
            {
                if (i > j)
                    break;
                else
                    count++;
            }
            j++;
        }
        i++;
    }
    new_arr = (int *)malloc(sizeof(int) * (size - count));
    i = 0;
    k = 0;
    while (i < size)
    {
        save = 1;
        j = 0;
        while (j < i)
        {
            if (arr[i] == arr[j])
            {
                save = 0;
                break;
            }
            j++;
        }
        if (save)
        {
            new_arr[k] = arr[i];
            k++;
        }
        i++;
    }
    return (new_arr);
}

// int main(void)
// {
//     int arr[7] = {1, 2, 7, 7, 5, 6, 7};
//     int i;
//     int *new_arr;

//     new_arr = no_dubs(arr, 7);
//     while (i < 5)
//     {
//         printf("%d\n", new_arr[i]);
//         i++;
//     }
//     free(new_arr);
//     return (0);
// }
    