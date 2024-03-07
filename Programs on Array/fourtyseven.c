// Sum of elements in the zig-zag sequence of a matrix
#include <stdio.h>

void calculateZigZagSum(int matrix[][3], int rows, int cols) {
    int sum = 0;
    int row = 0, col = 0;
    int direction = 1; // 1 for moving diagonally up, -1 for moving diagonally down

    while (row < rows && col < cols) {
        sum += matrix[row][col];

        // Move diagonally up
        if (direction == 1) {
            if (row > 0 && col < cols - 1) {
                row--;
                col++;
            } else if (col == cols - 1) {
                row++;
                direction = -1;
            } else {
                col++;
                direction = -1;
            }
        }
        // Move diagonally down
        else {
            if (col > 0 && row < rows - 1) {
                col--;
                row++;
            } else if (row == rows - 1) {
                col++;
                direction = 1;
            } else {
                row++;
                direction = 1;
            }
        }
    }

    printf("Sum of elements in zig-zag sequence: %d\n", sum);
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

    // Calculate and display the sum of elements in zig-zag sequence
    calculateZigZagSum(matrix, rows, cols);

    return 0;
}
