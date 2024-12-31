#include <stdio.h>

    int x, y;
    int quadrant;

int main () {

    printf("Enter the cordinates(x, y): ");
    scanf("%d%d", &x, &y);

    if (x >= 0 && y >= 0) {
        quadrant = 1;
    }
    else if (x < 0 && y >= 0) {
        quadrant = 2;
    }
    else if (x < 0 && y < 0) {
        quadrant = 3;
    }
    else {
        quadrant = 4;
    }

    printf("\nX: %d\nY: %d\nQuadrant: %d\n", x, y, quadrant);

    return 0;
}
