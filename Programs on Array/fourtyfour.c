// The maximum element in a column
#include <stdio.h>

void findMaxInEachColumn(int matrix[][3], int rows, int cols) {
    for (int j = 0; j < cols; ++j) {
        int maxElement = matrix[0][j];

        // Find the maximum element in the current column
        for (int i = 1; i < rows; ++i) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
            }
        }

        // Print the maximum element in the current column
        printf("Maximum element in Column %d: %d\n", j + 1, maxElement);
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

    // Find and display the maximum element in each column
    findMaxInEachColumn(matrix, rows, cols);

    return 0;
}
