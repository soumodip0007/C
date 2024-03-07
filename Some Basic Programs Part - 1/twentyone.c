// Prime number or not
#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false; // If divisible, the number is not prime
        }
    }

    return true; // If not divisible by any number up to its square root, it is prime
}

int main() {
    int num;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check and print whether the number is prime
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
