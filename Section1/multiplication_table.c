#include <stdio.h>

int num;

int main () {

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i=0; i < num; i++) {
        printf("\n%d * %d = %d", i+1, num, (i+1)*num);
    }
    return 0;
}
