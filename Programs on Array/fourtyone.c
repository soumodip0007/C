// Upper triangular matrix or not
// An upper triangular matrix is a special kind of square matrix where all the elements below the main 
// diagonal (including the diagonal elements) are zero. The main diagonal runs from the top-left corner 
// to the bottom-right corner of the matrix.
// 1 2 3
// 0 4 5
// 0 0 6
// In this matrix, all the elements below the main diagonal (the entries at positions (2,1) and (3,1), 
// as well as (3,2)) are zeros. The diagonal elements (at positions (1,1), (2,2), and (3,3)) can be zero 
// or non-zero.

// Upper triangular matrices have certain properties that make them useful in various mathematical and 
// computational contexts, especially in linear algebra and numerical analysis. For example, solving systems 
// of linear equations can be more efficient when dealing with upper triangular matrices.
#include <stdio.h>

// Function to check if a matrix is upper triangular
int isUpperTriangular(int matrix[][3], int size) {
    for (int i = 1; i < size; ++i) {
        for (int j = 0; j < i; ++j) {
            if (matrix[i][j] != 0) {
                return 0; // Not an upper triangular matrix
            }
        }
    }
    return 1; // Upper triangular matrix
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

    // Check if the matrix is upper triangular
    if (isUpperTriangular(matrix, size)) {
        printf("\nThe matrix is an upper triangular matrix.\n");
    } else {
        printf("\nThe matrix is not an upper triangular matrix.\n");
    }

    return 0;
}
