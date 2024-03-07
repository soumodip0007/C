// Quadrants in which coordinates lie 
// Quadrant I (QI): Both x and y are positive.
// Quadrant II (QII): x is negative, and y is positive.
// Quadrant III (QIII): Both x and y are negative.
// Quadrant IV (QIV): x is positive, and y is negative.
#include <stdio.h>

int main() {
    double x, y;

    // Input the coordinates
    printf("Enter the coordinates (x y): ");
    scanf("%lf %lf", &x, &y);

    // Determine the quadrant
    if (x > 0 && y > 0) {
        printf("Quadrant I (QI)\n");
    } else if (x < 0 && y > 0) {
        printf("Quadrant II (QII)\n");
    } else if (x < 0 && y < 0) {
        printf("Quadrant III (QIII)\n");
    } else if (x > 0 && y < 0) {
        printf("Quadrant IV (QIV)\n");
    } else if (x == 0 && y == 0) {
        printf("Origin\n");
    } else if (x == 0) {
        printf("On y-axis\n");
    } else if (y == 0) {
        printf("On x-axis\n");
    }

    return 0;
}
