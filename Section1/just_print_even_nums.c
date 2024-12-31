#include <stdio.h>

int num;

int main () {
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i=0; i < num; i++) {
        if ((i+1)%2 == 0) {
            printf("\n%d", i+1);
        }
    }
    return 0;
}
