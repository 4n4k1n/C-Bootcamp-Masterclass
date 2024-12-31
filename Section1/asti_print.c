#include <stdio.h>

char aster = '*';
int rows;
int colums;
int counter = 1;

int main () {
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of colums: ");
    scanf("%d", &colums);

    for (int j = 1; j <= rows; j++) {


        printf("\n");


        for (int i = 1; i <= colums; i++) {

            if (i <= counter) {
                printf("%d", i);
            }
            else {
                printf("%c", aster);
            }

        }

        counter++;
        //printf("%d", counter);
    }
return 0;



}
