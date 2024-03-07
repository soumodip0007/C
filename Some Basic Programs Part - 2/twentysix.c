// Pascal triangle
#include <stdio.h>

long long binomialCoefficient(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
    }
}

void printPascalsTriangle(int n) {
    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        // Print coefficients
        for (int k = 0; k <= i; k++) {
            printf("%lld ", binomialCoefficient(i, k));
        }

        printf("\n");
    }
}

int main() {
    int rows;

    // Input the number of rows for Pascal's Triangle
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    // Print Pascal's Triangle
    printf("Pascal's Triangle:\n");
    printPascalsTriangle(rows);

    return 0;
}
