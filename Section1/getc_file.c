#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("file1.txt", "r");

    if (fp == NULL) {
        perror("Fehler beim Öffnen der Datei");
        return 1;
    }

    char c;
    while ((c = fgetc(fp)) != EOF) {
        printf("%c", c);
    }

    fclose(fp);


    return 0;
}
