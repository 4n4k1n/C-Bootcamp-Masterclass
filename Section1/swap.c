#include <stdio.h>

int a;
int b;
int temp;

int main () {
    printf("Value a: ");
    scanf("%d", &a);

    printf("Value b: ");
    scanf("%d", &b);

    printf("\n");

    printf("\na = %d", a);
    printf("\nb = %d", b);

    temp = a;
    a = b;
    b = temp;

    printf("\na = %d", a);
    printf("\nb = %d", b);

    return 0;
}
