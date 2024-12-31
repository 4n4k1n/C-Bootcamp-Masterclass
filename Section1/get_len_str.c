#include <stdio.h>
#include <string.h>


char readStr() {
    char str[20];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    return str;
}


int lenStr() {
    int len = 0;
    char str[20];
    str = readStr();
    len = sizeof(str)/sizeof(str[0]);
    return len;
}


int main() {

    int len_str = len_str;

    printf("Lenght of the string is: ", len_str);


    return 0;
}
