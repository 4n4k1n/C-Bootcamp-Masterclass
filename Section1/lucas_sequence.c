#include <stdio.h>

int lucasSequence(int n) {

    if (n==0) {
        return 2;
    }
    if (n==1) {
        return 1;
    }
    return lucasSequence(n-1) + lucasSequence(n-2);

}



int main() {

    int num;
    printf("Enter a number for the lucas sequence: ");
    scanf("%d", &num);

    printf("\nLucas sequence: %d", lucasSequence(num));

    return 0;
}
