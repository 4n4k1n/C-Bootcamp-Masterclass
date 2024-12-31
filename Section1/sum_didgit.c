#include <stdio.h>

int sumOfDidgits(int num) {
    if (num < 10) {
        return num;
    }

    return num%10 +sumOfDidgits(num/10);
}




int main() {




printf("%d", sumOfDidgits(1234));






    return 0;
}
