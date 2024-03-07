// Palindromic pyramid pattern printing
#include <stdio.h>

void printPalindromicPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print increasing numbers
        for (int k = 1; k <= i; k++) {
            printf("%d", k);
        }

        // Print decreasing numbers
        for (int l = i - 1; l >= 1; l--) {
            printf("%d", l);
        }

        printf("\n");
    }
}

int main() {
    int rows;

    // Input the number of rows
    printf("Enter the number of rows for the palindromic pyramid: ");
    scanf("%d", &rows);

    // Print the palindromic pyramid pattern
    printf("Palindromic Pyramid Pattern:\n");
    printPalindromicPyramid(rows);

    return 0;
}
