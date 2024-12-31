#include <stdio.h>

int evenDigits(int num) {
    return num<10 ? !(num%2) : (num%10+evenDigits(num/10))%2;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\n%s.", evenDigits(num) ? "Even" : "Odd");
    return 0;
}
