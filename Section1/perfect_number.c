#include <stdio.h>

int num;

int perfectNumber(int num) {
    int result;
    float copie_num = num;
    int counter = 0;

    for (int i=1; i<=(num/2); i++) {
        if (num%i == 0) {
            counter += i;
        }
    }

    if (counter == num) {
        result = 1;
    }
    else {
        result = 0;
    }

    return result;
}

int main () {
    printf("Enter a number: ");
    scanf("%d", &num);


    printf("Result: %d", perfectNumber(num));



    return 0;
}
