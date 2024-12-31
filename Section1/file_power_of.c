#include <stdio.h>
#include <math.h>



int main() {

    FILE *fp;
    fp = fopen("powerof.txt", "w");
    int num;



    if (fp != NULL) {

        printf("Enter a number for the file: ");
        scanf("%d", &num);

        fputc(pow(num, num), fp);

        fclose(fp);


    }






    return 0;
}
