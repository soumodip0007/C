// Sum of boundary elements of a matrix
#include <stdio.h>

void calculateBoundarySum(int matrix[][3], int rows, int cols) {
    int sum = 0;

    // Sum the top row
    for (int j = 0; j < cols; ++j) {
        sum += matrix[0][j];
    }

    // Sum the bottom row
    for (int j = 0; j < cols; ++j) {
        sum += matrix[rows - 1][j];
    }

    // Sum the left column (excluding corners to avoid duplicate counting)
    for (int i = 1; i < rows - 1; ++i) {
        sum += matrix[i][0];
    }

    // Sum the right column (excluding corners to avoid duplicate counting)
    for (int i = 1; i < rows - 1; ++i) {
        sum += matrix[i][cols - 1];
    }

    printf("Sum of boundary elements: %d\n", sum);
}

int main() {
    int rows, cols;

    // Input for matrix
    printf("Enter the number of rows for the matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns for the matrix: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Enter elements for the matrix:\n");
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

    // Calculate and display the sum of boundary elements
    calculateBoundarySum(matrix, rows, cols);

    return 0;
}
