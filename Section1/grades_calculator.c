#include <stdio.h>

int amount_grades;
float sum_grades;

int main () {
    printf("Enter the amount of grades: ");
    scanf("%d", &amount_grades);

    float grades[amount_grades];

    for (int i=0; i < amount_grades; i++) {
        printf("Enter the %d. grade: ", i+1);
        scanf("%f", &grades[i]);

        sum_grades = sum_grades + grades[i];
    }

    sum_grades = sum_grades / amount_grades;
    printf("Your average grade is: %.1f", sum_grades);

    return 0;

}
