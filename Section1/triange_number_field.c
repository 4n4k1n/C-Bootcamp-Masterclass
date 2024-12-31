#include <stdio.h>

int n;

int main () {
    printf("Enter a number: ");
    scanf("%d", &n);

    int counter = n;

    for (int i=0; i < n; i++) {
        printf("\n");
        for (int j=counter; j > 0; j--) {
            printf(" ");
        }
        for (int k=1; k < i+1; k++) {
            printf("%d ", k);
        }
    counter--;
    }
    return 0;
}
