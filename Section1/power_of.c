#include <stdio.h>

int num;
int power_of_num;
int temp;

int main () {

    FILE *fp;
    fp = fopen("powerof.txt", "w");

    for (int i=1; i<=10; i++) {
        fprintf(fp, "%d %d\n", i, i*i);
    }
    fclose(fp);
    return 0;
}
