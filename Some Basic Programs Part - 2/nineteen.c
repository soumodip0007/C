// Solid and hollow rectangle star pattern
#include <stdio.h>

void solidRectangle(int rows, int cols) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Print the solid rectangle
    printf("Solid Rectangle Star Pattern:\n");
    solidRectangle(rows, cols);

    return 0;
}
