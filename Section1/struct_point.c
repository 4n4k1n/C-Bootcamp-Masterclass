#include <stdio.h>

typedef struct point {
    int x;
    int y;
}Point;

Point getPoint(Point p) {

    printf("Enter the x point: ");
    scanf("%d", &p.x);
    printf("Enter the y point: ");
    scanf("%d", &p.y);

    return p;
}

void pointPrint(Point p) {
    printf("The points are: x=%d / y=%d", p.x, p.y);
}


int main() {
    Point p1;

    pointPrint(getPoint(p1));

    return 0;
}
