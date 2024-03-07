// Matrix rotation by 90 degrees clockwise and anticlockwise
#include <stdio.h>

void rotateClockwise(int matrix[][10], int rows, int cols) {
    // Transpose the matrix
    for (int i = 0; i < rows; ++i) {
        for (int j = i + 1; j < cols; ++j) {
            // Swap matrix[i][j] with matrix[j][i]
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // Reverse the order of columns
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols / 2; ++j) {
            // Swap matrix[i][j] with matrix[i][cols-1-j]
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][cols - 1 - j];
            matrix[i][cols - 1 - j] = temp;
        }
    }
}

void rotateAnticlockwise(int matrix[][10], int rows, int cols) {
    // Transpose the matrix
    for (int i = 0; i < rows; ++i) {
        for (int j = i + 1; j < cols; ++j) {
            // Swap matrix[i][j] with matrix[j][i]
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // Reverse the order of rows
    for (int i = 0; i < rows / 2; ++i) {
        for (int j = 0; j < cols; ++j) {
            // Swap matrix[i][j] with matrix[rows-1-i][j]
            int temp = matrix[i][j];
            matrix[i][j] = matrix[rows - 1 - i][j];
            matrix[rows - 1 - i][j] = temp;
        }
    }
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

    // Rotate matrix clockwise by 90 degrees
    rotateClockwise(matrix, rows, cols);

    // Display the rotated matrix clockwise
    printf("\nRotated Matrix (Clockwise):\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Rotate matrix anticlockwise by 90 degrees
    rotateAnticlockwise(matrix, rows, cols);

    // Display the rotated matrix anticlockwise
    printf("\nRotated Matrix (Anticlockwise):\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
