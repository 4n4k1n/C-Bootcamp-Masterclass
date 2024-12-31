#include <stdio.h>


int main() {

    char first_name[10];
    char last_name[10];


    printf("\nEnter your first name: ");
    scanf("%s", &first_name);

    printf("\nEnter your last name: ");
    scanf("%s", &last_name);

    printf("Your name is: %s %s", first_name, last_name);

    return 0;
}
