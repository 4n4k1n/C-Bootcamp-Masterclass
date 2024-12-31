#include <stdio.h>


// {0, 1, 1, 2, 3, 5, 8, 13, 21, 34}



int fibonacci(int num) {



    if (num == 0) {
        return 0;
    }
    else if (num == 1) {
        return 1;
    }

    return fibonacci(num-1) + fibonacci(num-2);


}


int main() {



printf("%d", fibonacci(7));




    return 0;
}
