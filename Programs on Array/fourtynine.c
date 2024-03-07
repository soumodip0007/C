// Matrix printing in a spiral form
#include <stdio.h>

void printSpiral(int matrix[][4], int rows, int cols) {
    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;

    while (top <= bottom && left <= right) {
        // Print top row
        for (int i = left; i <= right; ++i) {
            printf("%d ", matrix[top][i]);
        }
        top++;

        // Print right column
        for (int i = top; i <= bottom; ++i) {
            printf("%d ", matrix[i][right]);
        }
        right--;

        // Print bottom row
        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                printf("%d ", matrix[bottom][i]);
            }
            bottom--;
        }

        // Print left column
        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
    }
}

int main() {
    int rows = 3, cols = 4;

    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Display the entered matrix
    printf("Entered Matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Print matrix in a spiral form
    printf("\nSpiral Form:\n");
    printSpiral(matrix, rows, cols);

    return 0;
}
