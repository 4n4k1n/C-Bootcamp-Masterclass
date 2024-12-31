#include <stdio.h>
#define SIZE 3
typedef struct point {
    int x;
    int y;
}Point;

    void getPoint(Point *p) {
        printf("Enter x: ");
        scanf("%d", &p->x);
        printf("Enter y: ");
        scanf("%d", &p->y);
    }

    void printPoint() {

        printf("\nx=%d\ny=%d", point_array[0].x, point_array[0].y);
    }



int main() {

    Point point_array[SIZE];

    for (int i=0; i<SIZE; i++) {
        getPoint(&point_array[i]);
    }



    return 0;
}
