#include <stdio.h>
#include <stdlib.h>

void printChars(int total, char char1, char char2) {


    printf("%c", char1);
    if (total>1) {
        printChars(total-1, char1, char2);
    }
    printf("%c", char2);





}




int main() {
    int total;
    char char1, char2;

    printf("Enter the total number: ");
    scanf("%d", &total);
    printf("Enter char1: ");
    scanf(" %c", &char1);
    printf("Enter char2: ");
    scanf(" %c", &char2);

    printChars(total, char1, char2);

    return 0;
}
