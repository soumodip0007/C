// Permutations in which n people can occupy r seats in a theatre 
#include <stdio.h>

// Function to calculate the factorial of a number
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Function to calculate the number of permutations P(n, r)
unsigned long long permutations(int n, int r) {
    return factorial(n) / factorial(n - r);
}

int main() {
    int n, r;

    // Input the values of n and r
    printf("Enter the values of n and r: ");
    scanf("%d %d", &n, &r);

    // Validate the input
    if (n < r || n < 0 || r < 0) {
        printf("Invalid input. Ensure that n >= r and both n and r are non-negative.\n");
        return 1;  // Exit with an error code
    }

    // Calculate and display the number of permutations
    unsigned long long result = permutations(n, r);
    printf("Number of permutations P(%d, %d): %llu\n", n, r, result);

    return 0;
}
