#include <stdio.h>
#define SIZE 20

typedef struct most{
    int index;
    int amount;
}Most;



int main() {
    int array[SIZE] = {2, 5, 7, 9, 6, 4, 3, 1, 4, 8, 9, 4, 3, 6, 0, 0, 0, 0, 0, 0};
    int array_count[10] = {0};;
    Most m = {0, 0};

    for (int i=0; i<SIZE; i++) {
        array_count[array[i]]++;
    }

    for (int j=1; j<10; j++) {
        if (m.amount < array_count[j]) {
            m.index = j;
            m.amount = array_count[j];
        }
    }

    printf("The number with the most apearences is %d with %d times.", m.index, m.amount);

    return 0;
}
