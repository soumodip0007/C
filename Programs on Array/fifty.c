// Rotate the matrix by K times
#include <stdio.h>

void rotateMatrix(int matrix[][10], int rows, int cols, int k) {
    k = k % (2 * (rows + cols - 2));

    // Rotate the matrix by K times
    for (int rotation = 0; rotation < k; ++rotation) {
        // Rotate the top row
        int temp = matrix[0][0];
        for (int i = 0; i < cols - 1; ++i) {
            matrix[0][i] = matrix[0][i + 1];
        }
        matrix[0][cols - 1] = temp;

        // Rotate the right column
        temp = matrix[0][cols - 1];
        for (int i = 0; i < rows - 1; ++i) {
            matrix[i][cols - 1] = matrix[i + 1][cols - 1];
        }
        matrix[rows - 1][cols - 1] = temp;

        // Rotate the bottom row
        temp = matrix[rows - 1][cols - 1];
        for (int i = cols - 1; i > 0; --i) {
            matrix[rows - 1][i] = matrix[rows - 1][i - 1];
        }
        matrix[rows - 1][0] = temp;

        // Rotate the left column
        temp = matrix[rows - 1][0];
        for (int i = rows - 1; i > 1; --i) {
            matrix[i][0] = matrix[i - 1][0];
        }
        matrix[1][0] = temp;
    }
}

int main() {
    int rows, cols, k;

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

    // Input for rotation count
    printf("Enter the rotation count (K): ");
    scanf("%d", &k);

    // Rotate matrix by K times
    rotateMatrix(matrix, rows, cols, k);

    // Display the rotated matrix
    printf("\nRotated Matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
