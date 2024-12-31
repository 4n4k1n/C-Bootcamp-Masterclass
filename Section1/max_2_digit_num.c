#include <stdio.h>

int num;
int max_didgit;

int maxOfTwoDidgitNum(int twoDidgitNum) {



    int max;
    int didgit1 = twoDidgitNum%10;
    int didgit2 = twoDidgitNum / 10;


    if (didgit1 > didgit2) {
        max = didgit1;
    }
    else {
        max = didgit2;
    }

    if (twoDidgitNum < 10 || twoDidgitNum >= 100) {
        printf("You have to enter a two didgit number!");
    }
    else {
        return max;
    }
}




int main () {
    printf("Enter a two didgit number: ");
    scanf("%d", &num);

    max_didgit = maxOfTwoDidgitNum(num);

    printf("\nMax didgit: %d", max_didgit);


    return 0;
}
