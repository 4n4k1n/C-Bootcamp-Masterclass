#include <stdio.h>

int num;

int main () {
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i=0; i < num; i++) {
        printf("%d ", i+1);
    }
    printf("\n");
    for (int i=num; i > 0; i--) {
        printf("%d ", i);
    }

    return 0;
}
