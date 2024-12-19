#include <stdlib.h>
#include <stdio.h>

void *str_insert(char *dest, char *src, int index)
{
    int len_src;
    int len_dest;
    char *temp;
    int i;
    int j;

    len_src = 0;
    while (src[len_src])
        len_src++;
    len_dest = 0;
    while (dest[len_dest])
        len_dest++;
    temp = (char*)malloc(sizeof(char) * (len_dest + len_src + 1));
    if (!temp)
        return (NULL);
    i = 0;
    j = 0;
    while (i < len_dest + len_src)
    {
        if (i == index)
        {
            while (j < len_src)
            {
                temp[i + j] = src[j];
                j++;
            }
            i += j;
            continue;
        }
        else
            temp[i] = dest[i - j];
        i++;
    }
    temp[i] = '\0';
    return (temp);
}

// int main(void)
// {
//     char *str;
//     str = str_insert("abc123", "!!!", 0);
//     printf("%s\n", str);
//     free(str);
//     return (0);
// }
