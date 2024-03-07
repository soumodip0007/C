// Abundant number or not
// An abundant number (or excessive number) is a positive integer that is smaller than the 
// sum of its proper divisors (excluding itself). In other words, the sum of the proper 
// divisors of an abundant number is greater than the number itself.
// Number: 24
// Proper divisors: 1, 2, 3, 4, 6, 8, 12
// Sum of proper divisors: 1 + 2 + 3 + 4 + 6 + 8 + 12 = 36
// 36 > 24, so 24 is an abundant number. 
//ex- 12, 18, 30, 42

#include <stdio.h>

// Function to calculate the sum of proper divisors of a number
int sumOfDivisors(int num) {
    int sum = 1;  // Include 1 as a divisor

    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return sum;
}

// Function to check if a number is an abundant number
int isAbundant(int num) {
    return (sumOfDivisors(num) > num);
}

int main() {
    int num;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check and print whether the number is an abundant number
    if (isAbundant(num)) {
        printf("%d is an abundant number.\n", num);
    } else {
        printf("%d is not an abundant number.\n", num);
    }

    return 0;
}
