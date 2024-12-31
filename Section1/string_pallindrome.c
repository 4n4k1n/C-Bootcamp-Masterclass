#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    int string[30];
    bool pallindrome = true;

    printf("Enter a word: ");
    fgets(string, strlen(string), stdin);

    int count_backwards = strlen(string);
    for (int i=0; i<strlen(string)/2; i++) {
        if (string[i] != string[count_backwards]) {
            pallindrome = false;
            break;
        }
        count_backwards--;
    }

    if (pallindrome) {
        printf("Its an pallindrome!");
    }
    else {
        printf("Its not an pallindrome!");
    }



    return 0;
}
