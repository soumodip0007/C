// Fibonacci series up to n
#include <stdio.h>

int main() {
    int n;

    // Input the number of terms from the user
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);

    int firstTerm = 0, secondTerm = 1, nextTerm;

    // Print the Fibonacci series up to n terms
    printf("Fibonacci Series up to %d terms: ", n);

    for (int i = 1; i <= n; ++i) {
        printf("%d", firstTerm);

        if (i < n) {
            printf(", ");
        }

        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    printf("\n");

    return 0;
}

