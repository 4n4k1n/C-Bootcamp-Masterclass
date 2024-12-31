#include <stdio.h>


int main() {


    FILE *fp;
    fp = fopen("new_file.txt", "w");
    char str[100];

    if (fp != NULL) {

        printf("Enter the string: ");
        fgets(str, sizeof(str), stdin);

        fprintf(fp, "%s", str);
        fclose(fp);

    }



    return 0;
}
