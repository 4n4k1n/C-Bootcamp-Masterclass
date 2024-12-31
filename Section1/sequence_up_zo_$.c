#include <stdio.h>


int upToSign(char letter) {

    char user_input;
    printf("Letter for sequence: ");
    scanf(" %c", &user_input);

    if (user_input == '$') {
        return 0;
    }
    if (user_input == letter) {
        return 1 + upToSign(letter);
    }
    return upToSign(letter);
}


int main() {
    char letter;
    printf("Enter a letter: ");
    scanf("%c", &letter);

    int amount_of_letter = upToSign(letter);


    printf("The letter %c is %d times in the sequence.", letter, amount_of_letter);


    return 0;
}
