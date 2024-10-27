#include <stdio.h>

void minMax(int n1, int n2, int *min, int *max) {
    if (n1>n2) {
        min = n2;
        max = n1;
    }
    else {
        min = n1;
        max = n2;
    }
}

int main() {
    int n1 = 1;
    int n2 = 2;
    int min;
    int max;

    minMax(n1, n2, &min, &max);



    printf("Min = %d", min);
    printf("Max = %d", max);






    return 0;
}