#include <stdio.h>

    void swapNums(int *pn1, int *pn2) {
        int temp;
        temp = *pn1;
        *pn1 = *pn2;
        *pn2 = temp;
    }


int main() {
    int num1 = 3;
    int num2 = 6;
    printf("\nNum 1 = %d", num1);
    printf("\nNum 2 = %d", num2);

    swapNums(&num1, &num2);

    printf("\nNum 1 = %d", num1);
    printf("\nNum 2 = %d", num2);

    return 0;
}