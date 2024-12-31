#include <stdio.h>
#define SIZE 15

int main() {
    char letter_arr[SIZE];
    int count_letter[53] = {0};
    int max_index = 0;

    for (int i=0; i<SIZE; i++) {
        printf("Enter a letter: ");
        scanf(" %c", &letter_arr[i]);
    }

    for (int j=0; j<SIZE; j++) {
        if ((int)letter_arr[j]>=65 && (int)letter_arr[j]<=90) {
            count_letter[letter_arr[j]-'A']++;
        }
        else if ((int)letter_arr[j]>=97 && (int)letter_arr[j]<=122) {
            count_letter[letter_arr[j]-'a'+26]++;
        }
        else if (letter_arr[j]==' ') {
            count_letter[52]++;
        }
    }

    for (int k=1; k<53; k++) {
        if (count_letter[k] > count_letter[max_index]) {
            max_index = k;
        }
    }

    if (max_index < 26) {
        printf("The letter that appears the most is '%c' (%d times).\n", max_index + 'A', count_letter[max_index]);
    } else if (max_index < 52) {
        printf("The letter that appears the most is '%c' (%d times).\n", max_index - 26 + 'a', count_letter[max_index]);
    } else {
        printf("The letter that appears the most is ' ' (%d times).\n", count_letter[max_index]);
    }

    return 0;
}
