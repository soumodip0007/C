// Diamond pattern printing using stars
#include <stdio.h>

void printDiamond(int n) {
    // Print the top half of the diamond
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

    // Print the bottom half of the diamond
    for (int i = n - 1; i >= 1; i--) {
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
    printf("Enter the number of rows for the diamond: ");
    scanf("%d", &rows);

    // Check if the input is an odd number
    if (rows % 2 == 0) {
        printf("Please enter an odd number for a symmetric diamond.\n");
        return 1;  // Exit with an error code
    }

    // Print the diamond pattern
    printf("Diamond Pattern using Stars:\n");
    printDiamond(rows);

    return 0;
}
