#include <stdio.h>

int sumUpToMinusOne(int num) {

    int user_input = 0;
    printf("Enter a number: ");
    scanf("%d", &user_input);

    if (user_input == -1) {
        return 0;
    }
    if (user_input < num) {
        return 1 + sumUpToMinusOne(num);
    }
    return sumUpToMinusOne(num);
}



int main () {

    printf("Numbers smaller than %d: %d", 5, sumUpToMinusOne(5));

    return 0;
}
