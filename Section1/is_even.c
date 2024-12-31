#include <stdio.h>

int num;

int isEven(int num) {
    if (num%2 == 1) {
        return 1;
    }
    else {
        return 0;
    }


}

int main () {
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d", isEven(num));

    return 0;
}
