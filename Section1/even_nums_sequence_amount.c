#include <stdio.h>

int sumEvenNums() {

    int user_input = 0;
    printf("Enter a number: ");
    scanf("%d", &user_input);

    if (user_input == -1) {
        return 0;
    }
    if (user_input%2 == 0) {
        return 1 + sumEvenNums();
    }
    return sumEvenNums();
}


int main() {

    int even_nums = sumEvenNums();
    printf("There are %d even numbers.", even_nums);

    return 0;
}
