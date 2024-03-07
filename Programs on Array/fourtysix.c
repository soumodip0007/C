// Saddle point coordinates of a given matrix
// In a matrix, a saddle point is an element that is simultaneously the minimum element in its row and 
// the maximum element in its column. In other words, it's a point where the value of the matrix is a 
// "saddle" in the sense that it's a low point in its row and a high point in its column.

// To determine whether an element is a saddle point, you compare it to all the elements in its row and 
// column. If it's the smallest in its row and the largest in its column, then it's a saddle point.
// 1  2  3
// 4  5  6
// 7  8  9

// In this matrix, the element 7 is the minimum in its row (7, 8, 9) and the maximum in its column (1, 4, 7). 
// Therefore, the coordinate (3, 1) is a saddle point. Not all matrices have saddle points, and a matrix can 
// have more than one saddle point.
#include <stdio.h>

void findSaddlePoint(int matrix[][3], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            int element = matrix[i][j];
            int isSaddlePoint = 1;

            // Check if the element is the minimum in its row
            for (int k = 0; k < cols; ++k) {
                if (matrix[i][k] < element) {
                    isSaddlePoint = 0;
                    break;
                }
            }

            // Check if the element is the maximum in its column
            for (int k = 0; k < rows; ++k) {
                if (matrix[k][j] > element) {
                    isSaddlePoint = 0;
                    break;
                }
            }

            // If the element is a saddle point, print its coordinates
            if (isSaddlePoint) {
                printf("Saddle Point Found at (%d, %d): %d\n", i + 1, j + 1, element);
            }
        }
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

    // Find and display the saddle points
    findSaddlePoint(matrix, rows, cols);

    return 0;
}
