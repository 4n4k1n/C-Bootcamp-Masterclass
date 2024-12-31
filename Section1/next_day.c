#include <stdio.h>
#include <stdbool.h>

int day, month, year;
bool leap_year;


int main () {
    printf("Enter a date(DD.MM.YYYY): ");
    scanf(" %d.%d.%d", &day, &month, &year);

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


    if (day == 28 && month == 2 && leap_year == true) {
        day++;
    }
    else if (day == 28 && month == 2 && leap_year == false) {
        day = 1;
        month++;
    }
    else if(day == 30 && (month == 4 || month == 6 || month == 9 || month == 11)) {
        day = 1;
        month++;
    }
    else if(day == 31 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10
    || month == 12)) {
        day = 1;
        month++;
        if (month == 13) {
            month = 1;
            year++;
        }
    }
    else {
        day++;
    }

    printf("Next date: %d.%d.%d", day, month, year);

    return 0;
}
