#include<stdio.h>

float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float a, float b);

int main() {
    float side, radius, a, b;

    printf("Enter side of square\n");
    scanf("%f", &side);
    printf("Enter radius of circle\n");
    scanf("%f", &radius);
    printf("Enter height and width of rectangle\n");
    scanf("%f %f", &a, &b);

    printf("Area of square is : %f\n", squareArea(side));
    printf("Area of circle is : %f\n", circleArea(radius));
    printf("Area of rectangle is : %f\n", rectangleArea(a, b));

    return 0;
}

float squareArea(float side) {
    return side * side;
}
float circleArea(float radius) {
    return 3.14 * radius * radius;
}
float rectangleArea(float a, float b) {
    return a * b;
}
