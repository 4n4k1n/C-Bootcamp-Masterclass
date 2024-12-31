#include <stdio.h>

int num;
int sum_ood;
int sum_even;


int main () {

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i=0; i < sizeof(num); i++) {
        int placeholder = num%10;

        if (placeholder%2 == 0) {
            sum_even += placeholder;
        }
        else {
            sum_ood += placeholder;
        }

        num -= placeholder;
        num /= 10;
    }

    printf("\nSum of the even numbers: %d", sum_even);
    printf("\nSum of the odd numbers: %d", sum_ood);

    return 0;
}
