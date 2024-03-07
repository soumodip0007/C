// Area of a circle
#include <stdio.h>
#include <math.h>

int main() {
    double radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = M_PI * radius * radius;

    printf("The area of the circle with radius %.2lf is: %.2lf\n", radius, area);

    return 0;
}
