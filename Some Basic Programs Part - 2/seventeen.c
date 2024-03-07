// Roots of a quadratic equation
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2;

    // Input coefficients
    printf("Enter coefficients (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check the nature of roots
    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct: %.2f and %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        // One real root (double root)
        root1 = -b / (2 * a);
        printf("Roots are real and identical: %.2f\n", root1);
    } else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and conjugates: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
