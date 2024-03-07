// Swap two numbers without third variable
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter value for a: ");
    scanf("%d", &a);

    printf("Enter value for b: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping, value of a: %d\n", a);
    printf("After swapping, value of b: %d\n", b);

    return 0;
}
