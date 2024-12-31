#include <stdio.h>
#include <stdbool.h>

#define SIZE 9



int isValid(int field, int y, int x, int num) {

    for (int i=0 i<SIZE; i++) {

        if (field[y][i] == num || field[i][x] == num || field[3*(x/3)+i/3][3*(y/3)+i/3] == num) {
            return 0;
        }
    }
    return 1;
}


int callback(int field, int y, int x, int num) {

    if (x != 0) {
        x--;
    }
    else {
        x = 8;
        y--;
    }



}

int logic(int field, int y, int x) {


    for (int i=1; i<=SIZE; i++) {

        if (isValid(field, y, x, i) == 1) {
            field[y][x] = i;
        }
        esle {

        }



    }




}




int main() {
    //variables
    const int sudoku_field_constant[SIZE][SIZE] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    int sudoku_field = sudoku_field_constant;

    int possibilities[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int x = 0;
    int y = 0;
    int possition = sudoku_field[0][0];
    bool solved = false;







    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d  ", sudoku_field[i][j]);
            if ((j+1)%3 == 0) {
                printf(" ");
            }
        }
        printf("\n");
        if ((i+1)%3 == 0) {
            printf("\n");
        }
    }




    return 0;
}
