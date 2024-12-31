#include <stdio.h>

int money;
int grade;

int main () {

    printf("Enter your grade and money: ");
    scanf("%d%d", &grade, &money);

    if (money < 50 && grade > 90) {
        printf("\nYou just earned 100 bucks :)");
    }
    else {
        printf("You just bad bro!");
    }

    return 0;
}
