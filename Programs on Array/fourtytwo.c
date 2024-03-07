// Lower triangular matrix or not
// A lower triangular matrix is another special kind of square matrix where all the elements above 
// the main diagonal (including the diagonal elements) are zero. The main diagonal runs from the 
// top-left corner to the bottom-right corner of the matrix.
// 1 0 0
// 2 3 0
// 4 5 6
// In this matrix, all the elements above the main diagonal (the entries at positions (1,2), (1,3), and (2,3)) 
// are zeros. The diagonal elements (at positions (1,1), (2,2), and (3,3)) can be zero or non-zero.

// Similar to upper triangular matrices, lower triangular matrices also have specific properties that make 
// them useful in various mathematical and computational contexts, particularly in linear algebra. They are 
// often encountered in the context of solving systems of linear equations and other matrix operations.
#include <stdio.h>

// Function to check if a matrix is lower triangular
int isLowerTriangular(int matrix[][3], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (matrix[i][j] != 0) {
                return 0; // Not a lower triangular matrix
            }
        }
    }
    return 1; // Lower triangular matrix
}

// Function to display a matrix
void displayMatrix(int matrix[][3], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int size;

    // Input for matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    int matrix[size][size];

    printf("Enter elements for the matrix:\n");
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            printf("matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the entered matrix
    printf("\nEntered Matrix:\n");
    displayMatrix(matrix, size);

    // Check if the matrix is lower triangular
    if (isLowerTriangular(matrix, size)) {
        printf("\nThe matrix is a lower triangular matrix.\n");
    } else {
        printf("\nThe matrix is not a lower triangular matrix.\n");
    }

    return 0;
}
