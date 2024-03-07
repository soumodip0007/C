// LCM of two numbers
#include <stdio.h>

// Function to calculate the Greatest Common Divisor (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate the Least Common Multiple (LCM)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate and print the LCM
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm(num1, num2));

    return 0;
}
