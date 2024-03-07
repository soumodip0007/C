// Strong number or not
// An Armstrong number (also known as a narcissistic number, pluperfect digital invariant, 
// or pluperfect number) is a number that is the sum of its own digits each raised to the 
// power of the number of digits. For example, 153 is an Armstrong number because 
// 1^3 + 5^3 + 3^3 = 153

#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Function to check if a number is a Strong Number
int isStrongNumber(int num) {
    int originalNum = num, sum = 0, remainder;

    while (num != 0) {
        remainder = num % 10;
        sum += factorial(remainder);
        num /= 10;
    }

    return (originalNum == sum);
}

int main() {
    int num;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check and print whether the number is a Strong Number
    if (isStrongNumber(num)) {
        printf("%d is a Strong Number.\n", num);
    } else {
        printf("%d is not a Strong Number.\n", num);
    }

    return 0;
}
