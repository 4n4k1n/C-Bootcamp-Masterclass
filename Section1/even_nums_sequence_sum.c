#include <stdio.h>

int sumEvenNums() {

    int user_input;
    printf("Enter a number: ");
    scanf("%d", &user_input);

    if (user_input == -1) {
        return 0;
    }
    if (user_input%2 == 0) {
        return user_input + sumEvenNums();
    }
    return sumEvenNums();
}

int main() {

    printf("The sum of even numbers is %d.", sumEvenNums());

    return 0;
}
