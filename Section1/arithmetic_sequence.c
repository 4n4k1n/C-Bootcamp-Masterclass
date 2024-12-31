#include <stdio.h>

//an = n1 (n-1) / d

//sn = (a1 + an) * (n / 2)

float an;
float a1;
int n;
float d;
float sn;

int main () {
    printf("Enter the first term (a1): ");
    scanf("%f", &a1);

    printf("\nEnter the amount of terms (n): ");
    scanf("%d", &n);

    printf("\nEnter the value of one term (d): ");
    scanf("%f", &d);

    float an = a1 + (n - 1) * d;
    printf("\nan = %f", an);

    float sn = (a1 + an) * (n / 2);
    printf("\nsn = %f", sn);

    return 0;
}
