#include <stdio.h>
#include <string.h>



int main() {

    char str[30];
    int words = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);



    for (int i=0; i<strlen(str); i++) {
        if (str[i] == ' ') {
            words++;
        }
    }


    printf("Words: %d", words);


    return 0;
}
