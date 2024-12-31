#include <stdio.h>

int num;
int sum = 0;

int main () {
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i=1; i <= num; i++) {
        if ((i%3 == 0) && (i%5 == 0)) {
            sum = sum + i;
        }
    }
    printf("Result: %d", sum);
    return 0;
}
