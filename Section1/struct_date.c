#include <stdio.h>

typedef struct date {
    int day;
    int month;
    int year;
}Date;


void nextDay(Date dt) {
    printf("\nToday: %d.%d.%d", dt.day, dt.month, dt.year);
    dt.day++;
    if (dt.day >31) {
        dt.day =  1;
        dt.month++;
        if (dt.month > 12) {
            dt.month = 1;
            dt.year++;
        }
    }
    printf("\nNext day: %d.%d.%d", dt.day, dt.month, dt.year);
}





int main() {


    Date mydate1;

    printf("Enter the day: ");
    scanf("%d", &mydate1.day);
    printf("Enter the month: ");
    scanf("%d", &mydate1.month);
    printf("Enter the year: ");
    scanf("%d", &mydate1.year);

    nextDay(mydate1);





    return 0;
}
