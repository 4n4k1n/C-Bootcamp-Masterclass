#include <stdio.h>

int import_time;
int seconds;
int minutes;
int hours;

int main () {
    printf("Enter the amount of seconds that you want to convert: ");
    scanf("%d", &import_time);

    hours = import_time / 3600;
    minutes = (import_time - (hours * 3600)) / 60;
    seconds = import_time % 60;

    if (hours < 10) {
        printf("0%d:", hours);
    }
    else {
        printf("%d:", hours);
    }

    if (minutes < 10) {
        printf("0%d:", minutes);
    }
    else {
        printf("%d:", minutes);
    }

    if (seconds < 10) {
        printf("0%d", seconds);
    }
    else {
        printf("%d", seconds);
    }

    return 0;
}
