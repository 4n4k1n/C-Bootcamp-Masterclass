#include <stdio.h>

char letter;


char up_low(char letter) {
    char translated_letter;

    if (letter >= 'A' && letter <= 'Z') {
        translated_letter = letter+32;
    }
    else if (letter >= 'a' && letter <= 'z'){
        translated_letter = letter-32;
    }
    else return -1;

    return translated_letter;
}



int main () {
    printf("Enter a letter: ");
    scanf("%c", &letter);



    printf("%c --> %c", letter, up_low(letter));



    return 0;
}
