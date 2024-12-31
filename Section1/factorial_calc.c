#include <stdio.h>


int num;




void factorial_calculator(int num) {

    int factorial = 1;

    for (int i = 1; i <= num; i++) {

        factorial = factorial * i;

    }

    printf("\n%d", factorial);


}






int main () {
    printf("Enter a number: ");
    scanf("%d", &num);


    factorial_calculator(num);


    return 0;
}
