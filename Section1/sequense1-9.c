#include <stdio.h>
#include <stdlib.h>

int num;

// Funktion zur Generierung einer Sequenz von Neunen
long nine_sequence(int num) {
    long result = 0;

    for (int i = 1; i <= num; i++) {
        result = result * 10 + 9;
    }
    return result;
}

// Funktion zur Generierung der Sequenz basierend auf der Eingabe
long sequence(int num) {
    long result = 0;

    if (num <= 9) {
        for (int i = 1; i <= num; i++) {
            result = result * 10 + i;
        }
    } else {
        result = nine_sequence(num);
    }
    return result;
}

int main() {
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n%ld\n", sequence(num));

    return 0;
}
