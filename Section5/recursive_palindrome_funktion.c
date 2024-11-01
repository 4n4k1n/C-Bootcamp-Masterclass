#include <stdio.h>
#define SIZE 6

int palindrome(int *arr, int size) {

    if (size <= 1) {
        return 1;
    }
    if (arr[0] != arr[size-1]) {
        return 0;
    }
    else {
        return palindrome(arr+1, size-2);
    }
}


int main() {
    int array[SIZE] = {1, 3, 3, 3, 2, 1};

    printf("\n%s", palindrome(array, SIZE) ? "Palindrome" : "No Pallindrome");

    return 0;
}