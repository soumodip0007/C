// Sum of N natural numbers
#include <stdio.h>

int main() {
    int N, sum;

    // Input the value of N from the user
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Calculate the sum of the first N natural numbers
    sum = N * (N + 1) / 2;

    // Print the result
    printf("The sum of the first %d natural numbers is: %d\n", N, sum);

    return 0;
}
