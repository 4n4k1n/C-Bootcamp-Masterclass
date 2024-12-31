#include <stdio.h>


int main() {
    int date[3];
    int date_copie[3];
    printf("Enter a date(27 6 2006): ");
    scanf("%d %d %d", &date[0], &date[1], &date[2]);

    printf("\nDate = %d.%d.%d\n", date[0], date[1], date[2]);

    for (int i=0; i<3; i++) {
        date_copie[i] = date[i];
    }

    printf("\nDate = %d.%d.%d", date_copie[0], date_copie[1], date_copie[2]);

    return 0;
}
