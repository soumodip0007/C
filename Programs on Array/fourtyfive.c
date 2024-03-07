// Sum of each row and column of a matrix
#include <stdio.h>

void calculateRowSum(int matrix[][3], int rows, int cols) {
    printf("\nSum of each row:\n");
    for (int i = 0; i < rows; ++i) {
        int rowSum = 0;
        for (int j = 0; j < cols; ++j) {
            rowSum += matrix[i][j];
        }
        printf("Row %d: %d\n", i + 1, rowSum);
    }
}

void calculateColumnSum(int matrix[][3], int rows, int cols) {
    printf("\nSum of each column:\n");
    for (int j = 0; j < cols; ++j) {
        int colSum = 0;
        for (int i = 0; i < rows; ++i) {
            colSum += matrix[i][j];
        }
        printf("Column %d: %d\n", j + 1, colSum);
    }
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

    // Calculate and display the sum of each row and column
    calculateRowSum(matrix, rows, cols);
    calculateColumnSum(matrix, rows, cols);

    return 0;
}
