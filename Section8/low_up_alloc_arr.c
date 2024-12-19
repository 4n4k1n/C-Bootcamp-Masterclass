#include <stdio.h>
#include <stdlib.h>

void seperate_str(char *str, char **low_arr, char **up_arr, char **spc_arr)
{
    int len_low;
    int len_up;
    int len_spc;
    
    len_spc = 0;
    len_low = 0;
    len_up = 0;
    while (str[len_low + len_up + len_spc])
    {
        if (str[len_low + len_up + len_spc] >= 'a' && str[len_low + len_up + len_spc] <= 'z')
            len_low++;
        else if (str[len_low + len_up + len_spc] >= 'A' && str[len_low + len_up + len_spc] <= 'Z')
            len_up++;
        else
            len_spc++;
    }
    *low_arr = (char *)malloc(sizeof(char) * (len_low + 1));
    *up_arr = (char *)malloc(sizeof(char) * (len_up + 1));
    *spc_arr = (char *)malloc(sizeof(char) * (len_spc + 1));
    if (!low_arr || !up_arr || !spc_arr)
    {
        free(low_arr);
        free(up_arr);
        free(spc_arr);
        return;
    }
    len_spc = 0;
    len_low = 0;
    len_up = 0;
    while (str[len_low + len_up + len_spc])
    {
        if (str[len_low + len_up + len_spc] >= 'a' && str[len_low + len_up + len_spc] <= 'z')
        {
            (*low_arr)[len_low] = str[len_low + len_up + len_spc];
            len_low++;
        }
        else if (str[len_low + len_up + len_spc] >= 'A' && str[len_low + len_up + len_spc] <= 'Z')
        {
            (*up_arr)[len_up] = str[len_low + len_up + len_spc];
            len_up++;
        }
        else
        {
            (*spc_arr)[len_spc] = str[len_low + len_up + len_spc];
            len_spc++;
        }
    }
    (*low_arr)[len_low] = '\0';
    (*up_arr)[len_up] = '\0';
    (*spc_arr)[len_spc] = '\0';
}

// int main (int ac, char **av)
// {
//     char *spc;
//     char *low;
//     char *up;

//     if (ac != 2)
//     {
//         printf("Not the right amount of arguments!!!");
//         return (1);
//     }
//     seperate_str(av[1], &low, &up, &spc);
//     printf("%s\n", av[1]);
//     printf("%s\n", low);
//     printf("%s\n", up);
//     printf("%s\n", spc);
//     free(low);
//     free(up);
//     free(spc);
//     return (0);
// }