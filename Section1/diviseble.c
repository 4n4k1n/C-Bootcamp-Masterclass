#include <stdio.h>

int num;

int diviseble(int num) {
    int result = 0;

    for (int i=1; i<=num; i++) {
        if (num%i == 0) {
            result += i;
            printf("\n%d", i);
        }
    }

    return result;
}

int main () {
    printf("\nEnter a number: ");
    scanf("%d", &num);

    printf("\nThe sum of numbers: %d", diviseble(num));

    return 0;
}
