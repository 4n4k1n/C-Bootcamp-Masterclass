#include <stdio.h>


void upToN(int n) {
    if (n>=1) {
        upToN(n-1);
        printf("%d ", n);
    }
}


void downToN(int n) {
    if (n>=1) {
        printf("%d ", n);
        downToN(n-1);
    }
}

void mixed(int n) {

    downToN(n);
    upToN(n);

}


int main() {

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    mixed(n);

    return 0;
}
