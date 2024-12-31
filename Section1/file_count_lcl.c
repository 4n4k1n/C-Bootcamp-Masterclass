#include <stdio.h>




int main() {
    char user_file[30];
    char c;
    int count_lcl;
    /*printf("Enter the file name: ");
    fgets(user_file, 30, stdin); */

    FILE *fp;
    fp = fopen("new_file.txt", "r");

    if (fp != NULL) {

        while ((c = fgetc(fp)) != EOF) {
            if (c >= 97 && c <= 122) {
                count_lcl++;
            }
        }
        fclose(fp);
    }
    printf("The amount of lower case letter is: %d", count_lcl);
    return 0;
}
