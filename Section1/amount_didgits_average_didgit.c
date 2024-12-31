#include <stdio.h>

int num = 1234;
int didgit = 3;

float averageDidgit(int num, int didgit) {

    int counter = 0;
    float average = 0;

    while (num != 0) {
        if (num%10 < didgit) {
            counter++;
            average = average + (num%10);
        }
        num = num / 10;
    }
    average /= counter;
    printf("\nDidgits under the given didgit: %d", counter);
    return average;
}


int main () {
    printf("\nEnter a number: ");
    scanf("%d", &num);
    printf("\nEnter a didgit: ");
    scanf("%d", &didgit);

    printf("\nThe average: %.2f", averageDidgit(num, didgit));


    return 0;
}
