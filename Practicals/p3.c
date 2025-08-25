#include <stdio.h>
#define PI 3.14  // constant value for π

int main() {
    float radius, length, breadth, side;
    float areaCircle, areaRectangle, areaSquare;

    // Circle
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    areaCircle = PI * radius * radius;

    // Rectangle
    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f", &length, &breadth);
    areaRectangle = length * breadth;

    // Square
    printf("Enter side of square: ");
    scanf("%f", &side);
    areaSquare = side * side;

    // Print results
    printf("Area of Circle = %.2f\n", areaCircle);
    printf("Area of Rectangle = %.2f\n", areaRectangle);
    printf("Area of Square = %.2f\n", areaSquare);

    return 0;
}
