#include <stdio.h>

int main() {

    char lowercase_arr[10] = {'z', 'e', 'b', 'u', 'r', 'z', 'b', 'z', 'a', 'z'};
    int count_array[26] = {0};

    for (int i=0; i<10; i++) {
        count_array[lowercase_arr[i]-'a']++;
    }

    int max_index = 0;

    for (int j=1; j<26; j++) {
        if (count_array[j] > count_array[max_index]) {
            max_index = j;
        }
    }

    printf("Max letter: %c has %d countet.", max_index+'a', count_array[max_index]);

    return 0;
}
