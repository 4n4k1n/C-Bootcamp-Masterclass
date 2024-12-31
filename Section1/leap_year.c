#include <stdio.h>
#include <stdbool.h>

bool leap_year;
int year;

int main () {
    printf("Enter the year: ");
    scanf("%d", &year);

    if (year%4 == 0) {
        if (year%100 == 0) {
            if (year%400 == 0) {
                leap_year = true;
            }
            else {
                leap_year = false;
            }
        }
        else {
            leap_year = true;
        }
    }
    else {
        leap_year = false;
    }

    if (leap_year == true) {
        printf("Its a leap year.");
    }
    else {
        printf("Its not a leap year.");
    }

    return 0;
}
