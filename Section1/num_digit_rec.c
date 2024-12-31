#include <stdio.h>

int evenAmountDigits(int num, int digit) {


    if (num<10) {
        return num==digit ? 1 : 0;
    }

    return evenAmountDigits(num/10, digit)%2 == 1 ? 0 : 1;
}

int main() {
    int num, digit;

    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the digit: ");
    scanf("%d", &digit);


    printf("%s.", evenAmountDigits(num, digit)==1 ? "Even" : "Odd");





    return 0;
}
