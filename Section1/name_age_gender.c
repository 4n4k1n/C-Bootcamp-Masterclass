#include <stdio.h>

char name[30];
int age;
char gender[10];

int main () {

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("\nEnter your age: ");
    scanf("%d", &age);
    getchar();

    printf("\nEnter your gender: ");
    fgets(gender, sizeof(gender), stdin);

    name[strcspn(name, "\n")] = 0;
    gender[strcspn(gender, "\n")] = 0;


    printf("\nName: %s \nAge: %d \nGender: %s", name, age, gender);

    return 0;



}
