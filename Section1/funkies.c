#include <stdio.h>


int min_max_print (char mm, int num1, int num2) {
    int result;

    if (mm == 'm') {
        if (num1 < num2) {
            result = num1;
        }
        else {
            result = num2;

        }
    }
    else {
        if (num1 > num2) {
            result = num1;
        }
        else {
            result = num2;
        }
    }

    return result;
}




int main () {


    printf("%d", min_max_print('M', 17, 10));

    return 0;
}
