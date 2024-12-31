#include <stdio.h>

int nums[3];
int counter;
int n = sizeof(nums)/sizeof(nums[0]);


int main () {
    printf("Enter three numbers: ");
    scanf(" %d %d %d", & nums[0], &nums[1], &nums[2]);

    while (getchar() != '\n');

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (nums[j] < nums[j+1]) {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }

    if (nums[0] % nums[1] == 0) {
        if (nums[0] % nums[1] == 0) {
            printf("Divisible");
        }
        else {
            printf("Not divisible");
        }
    }
    else {
        printf("Not divisible");
    }

    return 0;
}
