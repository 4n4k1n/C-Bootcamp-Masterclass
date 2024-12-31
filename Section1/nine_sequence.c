#include <stdio.h>
#include <math.h>


int num;

int nine_sequence(int num) {
    int result = 0;

    for (int i=1; i<=num; i++) {

        result = result*10 + 9;

    }
    return result;
}


int main () {

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d", nine_sequence(num));


    return 0;
}
