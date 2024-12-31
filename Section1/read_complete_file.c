#include <stdio.h>




int main() {
    int num1, num2;
    FILE *fp;
    fp = fopen("powerof.txt", "r");
    char c;

    if (fp != NULL) {

        for (int i=1; i<=10; i++) {

            fscanf(fp, "%d%d", &num1, &num2);
            printf("\n%d %d", num1, num2);
        }


        fclose(fp);
    }

    return 0;
}
