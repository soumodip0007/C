// Pyramid pattern using stars
#include <stdio.h>

void printPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }

        printf("\n");
    }
}

int main() {
    int rows;

    // Input the number of rows
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);

    // Print the pyramid pattern
    printf("Pyramid Pattern using Stars:\n");
    printPyramid(rows);

    return 0;
}
