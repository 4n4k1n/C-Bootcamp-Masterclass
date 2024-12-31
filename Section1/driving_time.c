#include <stdio.h>

float driving_time;
float speed;
float distance;


int main () {

printf("How fast did you drive(km/h): ");
scanf("%f", &speed);

printf("How long did you drive(h): ");
scanf("%f", &driving_time);

distance = speed * driving_time;

printf("The distance is: %.1f", distance);

return 0;

}
