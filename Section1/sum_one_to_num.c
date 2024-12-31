#include <stdio.h>

int num;
int sum_num;

int main () {
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i=0; i < num; i++) {
        sum_num = sum_num + (i+1);
    }
    printf("Result: %d", sum_num);
    return 0;
}
