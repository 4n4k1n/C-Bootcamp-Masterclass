#include <stdio.h>
#define days 7

int main () {

    float themerature[days];
    float average_temperature;
    int hotest_day = themerature[0];
    int coldest_day = themerature[0];


    for (int i=0; i<days; i++) {
        printf("Enter the temerature for day %d: ", i+1);
        scanf("%f", &themerature[i]);
        average_temperature += themerature[i];
        if (hotest_day < themerature[i]) {
            hotest_day = i;
        }
        if (coldest_day > themerature[i]) {
            coldest_day = i;
        }
    }
    average_temperature /= days;
    printf("\nThe average temperature in the last 7 days was: %.2f°C", average_temperature);
    printf("\nHotest: day%d = %.2f", hotest_day+1, themerature[hotest_day]);
    printf("\nColdest: day%d = %.2f", (int)coldest_day+1, themerature[coldest_day]);

    return 0;
}
