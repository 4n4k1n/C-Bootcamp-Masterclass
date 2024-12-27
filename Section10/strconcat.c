#include <stdio.h>
#include <stdlib.h>

char *strconcat(char *str)
{
    char *new_arr;
    int len;
    int i;

    len = 0;
    while (str[len])
        len++;
    new_arr = (char *)malloc(sizeof(char) * ((len * 2) + 1));
    if (!new_arr)
        return (NULL);
    i = 0;
    while (i < len * 2)
    {
        new_arr[i] = str[i % len];
        i++;
    }
    new_arr[i] = '\0';
    return (new_arr);
}

// int main (void)
// {
//     char *str;
    
//     str = strconcat("Alpha");
//     printf("%s\n", str);
//     free(str);
//     return 0;
// }