#include <stdio.h>

int upToNum(int num) {
    int sum = 0;

    for (int i=1; i<= num; i++) {
        sum += i;
    }

    return sum;
}


int main() {
    int num;
    int sum_of_num;

    printf("Enter an int number: ");
    scanf("%d", &num);

    sum_of_num = upToNum(num);
    printf("\n sum: %d", sum_of_num);


    return 0;
}
