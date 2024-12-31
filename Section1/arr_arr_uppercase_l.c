#include <stdio.h>




int main() {
    char uppercase_array[10] = {'A', 'B', 'C', 'C', 'C', 'D', 'E', 'F', 'G', 'H'};
    int count_array[26] = {0};
    int max_indey = 0;

    for (int i=0; i<10; i++) {
        count_array[uppercase_array[i]-'A']++;
    }

    for (int j=1; j<26; j++) {
        if (count_array[j] > count_array[max_indey]) {
            max_indey = j;
        }
    }

    printf("The letter that apears the most is: %c (%d times).", max_indey+'A', max_indey);

    return 0;
}
