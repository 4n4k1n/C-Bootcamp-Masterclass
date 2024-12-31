#include <stdio.h>

float grade1;
float grade2;
float grade3;
float result;

int main () {

printf("First grade: ");
scanf("%f", &grade1);

printf("Second grade: ");
scanf("%f", &grade2);

printf("Third grade: ");
scanf("%f", &grade3);

result = (grade1 + grade2 + grade3) / 3;

printf("Average grade: %.1f", result);

return 0;
}
