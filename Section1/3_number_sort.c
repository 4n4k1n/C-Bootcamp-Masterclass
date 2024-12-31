#include <stdio.h>

int list_nums[3];

int n = sizeof(list_nums)/sizeof(list_nums[0]);

int main () {
    // Input numbers
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &list_nums[i]);
    }

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (list_nums[j] > list_nums[j+1]) {
                int temp = list_nums[j];
                list_nums[j] = list_nums[j+1];
                list_nums[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("Number %d: %d\n", i + 1, list_nums[i]);
    }

    return 0;
}
