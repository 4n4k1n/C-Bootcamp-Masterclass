#include <stdio.h>

int findMinMax(int num1, int num2) {
    if (num1<num2) {
        return num1, num2;
    }
    else {
        return num2, num1;
    }
}



int main() {
    int num1 = 1;
    int num2 = 5;

    int min, max = findMinMax(num1, num2);


    printf("min = %d\nmax = %d", &min, max);



    return 0;
}
