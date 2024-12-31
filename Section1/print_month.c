#include <stdio.h>

int num_month;
char month[12][20] = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};

int main () {

    printf("Enter a number forr an month(1-12): ");
    scanf("%d", num_month);

    if (!(num_month < 1 || num_month > 12)) {
        printf("%s", month[num_month - 1]);
    }
    else {
        printf("You have to enter a number between 1-12: ");
    }

    return 0;
}
