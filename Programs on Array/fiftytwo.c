// Maximum size of square submatrix with all 1s in a binary matrix 
#include <stdio.h>

// Function to find the minimum of three values
int min(int a, int b, int c) {
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}

// Function to find the maximum size of square submatrix with all 1s
int maxSizeSquareSubmatrix(int matrix[][10], int rows, int cols) {
    int maxSize = 0;
    int dp[10][10]; // Assuming a maximum size of 10x10 for simplicity

    // Copy the first row and first column from the original matrix to the dp matrix
    for (int i = 0; i < rows; ++i) {
        dp[i][0] = matrix[i][0];
        maxSize = (dp[i][0] > maxSize) ? dp[i][0] : maxSize;
    }

    for (int j = 0; j < cols; ++j) {
        dp[0][j] = matrix[0][j];
        maxSize = (dp[0][j] > maxSize) ? dp[0][j] : maxSize;
    }

    // Build the dp matrix
    for (int i = 1; i < rows; ++i) {
        for (int j = 1; j < cols; ++j) {
            if (matrix[i][j] == 1) {
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]) + 1;
                maxSize = (dp[i][j] > maxSize) ? dp[i][j] : maxSize;
            } else {
                dp[i][j] = 0;
            }
        }
    }

    return maxSize;
}

int main() {
    int rows, cols;

    // Input for matrix dimensions
    printf("Enter the number of rows for the matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns for the matrix: ");
    scanf("%d", &cols);

    // Input for matrix elements
    int matrix[10][10];
    printf("Enter elements for the matrix (0 or 1):\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the entered matrix
    printf("\nEntered Matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Find the maximum size of square submatrix with all 1s
    int maxSize = maxSizeSquareSubmatrix(matrix, rows, cols);

    // Display the result
    printf("\nMaximum Size of Square Submatrix with All 1s: %d\n", maxSize);

    return 0;
}
