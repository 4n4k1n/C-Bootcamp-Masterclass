#include <stdio.h>

int amountDidgits(int num) {

    if (num < 10) {
        return 1;
    }

    return 1 + amountDidgits(num/10);



}

int main() {



    printf("%d", amountDidgits(123456789));


    return 0;
}
