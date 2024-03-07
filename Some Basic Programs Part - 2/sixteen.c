// Number of integers which has exactly 9 divisors
#include <stdio.h>
#include <math.h>

// Function to count the number of distinct divisors of a positive integer
int countDivisors(int num) {
    int count = 0;
    for (int i = 1; i <= sqrt(num); i++) {
        if (num % i == 0) {
            if (num / i == i) {
                // i is a factor and the only factor (square root)
                count++;
            } else {
                // i and num/i are distinct factors
                count += 2;
            }
        }
    }
    return count;
}

// Function to check if a number has exactly 9 divisors
int hasExactlyNineDivisors(int num) {
    return countDivisors(num) == 9;
}

int main() {
    int n;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Validate the input
    if (n < 1) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;  // Exit with an error code
    }

    // Count and display the number of integers with exactly 9 divisors from 1 to n
    printf("Integers with exactly 9 divisors from 1 to %d:\n", n);
    for (int i = 1; i <= n; i++) {
        if (hasExactlyNineDivisors(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
