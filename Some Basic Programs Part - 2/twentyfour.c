// Diamond pattern printing using numbers
#include <stdio.h>
#include <math.h>

void printNumberDiamond(int n) {
    int mid = n / 2 + 1;

    // Print the top half of the diamond
    for (int i = 1; i <= mid; i++) {
        // Print spaces
        for (int j = 1; j <= mid - i; j++) {
            printf(" ");
        }

        // Print increasing numbers
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("%d", k);
        }

        printf("\n");
    }

    // Print the bottom half of the diamond
    for (int i = mid - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= mid - i; j++) {
            printf(" ");
        }

        // Print increasing numbers
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("%d", k);
        }

        printf("\n");
    }
}

int main() {
    int rows;

    // Input the number of rows
    printf("Enter the number of rows for the number diamond: ");
    scanf("%d", &rows);

    // Check if the input is an odd number
    if (rows % 2 == 0) {
        printf("Please enter an odd number for a symmetric diamond.\n");
        return 1;  // Exit with an error code
    }

    // Print the number diamond pattern
    printf("Number Diamond Pattern:\n");
    printNumberDiamond(rows);

    return 0;
}
