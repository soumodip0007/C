// Prime numbers in a given range
#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to print prime numbers in a given range
void printPrimesInRange(int start, int end) {
    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int start, end;

    // Input the range
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    // Print prime numbers in the given range
    printPrimesInRange(start, end);

    return 0;
}
