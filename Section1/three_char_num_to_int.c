#include<stdio.h>

char didgit_chars[3];

int convertStr(char didgit_chars[]) {
    int convert_num = 0;

    for (int i=0; i<3; i++) {

        convert_num = convert_num*10 + (didgit_chars[i]- '0' + 0);
    }

    return convert_num;
}



int main () {
    printf("Enter 3 numbers as chars: ");
    scanf("%s", didgit_chars);

    printf("\nNumber in decimal: %d", convertStr(didgit_chars));

    return 0;
}
