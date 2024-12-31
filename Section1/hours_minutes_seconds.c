#include <stdio.h>

float time;
float seconds;
float minutes;
float hours;
char choice;

int main () {
    printf("What do you wanna convert (s/m/h): ");
    scanf(" %c", &choice);

    printf("Type the amount of time in that you want to convert: ");
    scanf("%f", &time);


    switch (choice) {
    case 's':
        minutes = time / 60;
        hours = minutes / 60;
        printf("\nMinutes: %.2f", minutes);
        printf("\nHours: %.2f", hours);
        break;
    case 'm':
        seconds = time * 60;
        hours = time / 60;
        printf("\nSeconds: %.2f", seconds);
        printf("\nHours: %.2f", hours);
        break;
    case 'h':
        minutes = time * 60;
        seconds = minutes * 60;
        printf("\nSeconds: %.2f", seconds);
        printf("\nMinutes: %.2f", minutes);
        break;
    }

    return 0;

}
