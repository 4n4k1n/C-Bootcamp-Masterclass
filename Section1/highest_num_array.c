#include <stdio.h>

int num_arr[] = {6, 3, 1, 4};
int lenght = sizeof(num_arr)/sizeof(num_arr[0]);


int main () {
    int max = num_arr[0];


    for (int i=1; i<lenght; i++) {

        if (num_arr[i] > max) {
            max = num_arr[i];
        }


    }

    printf("\n\n%d", max);

    return 0;
}
