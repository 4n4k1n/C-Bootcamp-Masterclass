#include <stdio.h>

float height;
float width;
float area;

float area_triangle(float height, float width) {
    float area;

    area = height * width * 0.5;

    return area;
}

int main () {
    printf("Enter the height: ");
    scanf("%f", &height);

    printf("Enter the width: ");
    scanf("%f", &width);

    area = area_triangle(height, width);

    printf("The area is: %.2f", area);

    return 0;
}
