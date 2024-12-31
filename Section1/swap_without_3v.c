#include <stdio.h>




int main() {
    int num1 = 20;
    int num2 = 12;

    /* printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2); */


    printf("\nnum1 = %d", num1);
    printf("\nnum2 = %d", num2);




    num1 += num2;
    num2 = num1 -num2;
    num1 -= num2;


    printf("\nnum1 = %d", num1);
    printf("\nnum2 = %d", num2);


    return 0;
}
