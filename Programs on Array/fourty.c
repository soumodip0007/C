// Transpose of a matrix
#include <stdio.h>

void transposeMatrix(int A[][3], int rows, int cols, int result[][3]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[j][i] = A[i][j];
        }
    }
}

void displayMatrix(int matrix[][3], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    // Input for matrix A
    printf("Enter the number of rows for the matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns for the matrix: ");
    scanf("%d", &cols);

    int A[rows][cols];

    printf("Enter elements for the matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    int result[cols][rows]; // Transpose matrix

    transposeMatrix(A, rows, cols, result);

    printf("\nMatrix A:\n");
    displayMatrix(A, rows, cols);

    printf("\nTranspose of Matrix A:\n");
    displayMatrix(result, cols, rows);

    return 0;
}
