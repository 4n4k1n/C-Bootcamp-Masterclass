#include <stdio.h>

#define SIZE 7


int main() {

    int pull_ups[SIZE];
    int pull_ups_reverse[SIZE];

    for (int i=0; i<SIZE; i++) {
        printf("Enter the amount of pullups you did today: ");
        scanf("%d", &pull_ups[i]);
    }

    int counter = SIZE-1;

    for (int i=0; i<SIZE; i++) {
        pull_ups_reverse[i] = pull_ups[counter];
        counter--;
    }

    printf("\n");
    for (int i=0; i<SIZE; i++) {
        printf("%d ", pull_ups[i]);
    }

    printf("\n");
    for (int i=0; i<SIZE; i++) {
        printf("%d ", pull_ups_reverse[i]);
    }

    printf("\n");

    return 0;
}
