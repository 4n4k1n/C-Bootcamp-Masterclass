#include <stdio.h>




int main() {

    FILE *fp;
    fp = fopen("file1.txt", "r");
    char c;
    int count_rows = 0;




    if (fp != NULL) {

        while ((c = fgetc(fp)) != EOF) {
            printf("%c", c);
            if (c == '\n') {
                count_rows++;
            }
        }
        printf("\nRows: %d", count_rows);
        fclose(fp);
    }







    return 0;
}
