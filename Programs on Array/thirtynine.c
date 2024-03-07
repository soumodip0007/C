// Matrix operations (Addition, subtraction and multiplication)
#include <stdio.h>

void addMatrices(int A[][2], int B[][2], int result[][2], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void subtractMatrices(int A[][2], int B[][2], int result[][2], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

void multiplyMatrices(int A[][2], int B[][3], int result[][3], int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < colsA; ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
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

void displayResultMatrix(int matrix[][3], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rowsA, colsA, rowsB, colsB;

    // Input for matrix A
    printf("Enter the number of rows for matrix A: ");
    scanf("%d", &rowsA);
    printf("Enter the number of columns for matrix A: ");
    scanf("%d", &colsA);

    int A[rowsA][colsA];
    printf("Enter elements for matrix A:\n");
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsA; ++j) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Input for matrix B
    printf("Enter the number of rows for matrix B: ");
    scanf("%d", &rowsB);
    printf("Enter the number of columns for matrix B: ");
    scanf("%d", &colsB);

    int B[rowsB][colsB];
    printf("Enter elements for matrix B:\n");
    for (int i = 0; i < rowsB; ++i) {
        for (int j = 0; j < colsB; ++j) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    if (colsA != rowsB) {
        printf("Matrix multiplication is not possible.\n");
        return 1;
    }

    int resultAdd[rowsA][colsA];
    int resultSubtract[rowsA][colsA];
    int resultMultiply[rowsA][colsB];

    addMatrices(A, B, resultAdd, rowsA, colsA);
    subtractMatrices(A, B, resultSubtract, rowsA, colsA);
    multiplyMatrices(A, B, resultMultiply, rowsA, colsA, colsB);

    printf("\nMatrix A:\n");
    displayMatrix(A, rowsA, colsA);

    printf("\nMatrix B:\n");
    displayMatrix(B, rowsB, colsB);

    printf("\nSum of matrices A and B:\n");
    displayResultMatrix(resultAdd, rowsA, colsA);

    printf("\nDifference of matrices A and B:\n");
    displayResultMatrix(resultSubtract, rowsA, colsA);

    printf("\nProduct of matrices A and B:\n");
    displayResultMatrix(resultMultiply, rowsA, colsB);

    return 0;
}

