#include <stdio.h>

float money;
float hours;
float result;


int main () {
    printf("How much your earn per hour: ");
    scanf("%f", &money);

    printf("How many hours are you working per month: ");
    scanf("%f", &hours);

    float result = money * hours;

    printf("You earned: %.2f", result);

    return 0;

}
