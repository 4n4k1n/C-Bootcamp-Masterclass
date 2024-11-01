#include <stdio.h>

void decToBin(int num) {
    if (num > 0) {
        decToBin(num/2);
    printf("%d", num%2);
    }
}

int main() {
    int num;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    printf("\n%d in binary is: ", num);
    decToBin(num);

    return 0;
}