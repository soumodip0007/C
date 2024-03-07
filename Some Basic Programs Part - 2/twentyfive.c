// Floyd's triangle
#include <stdio.h>

void printFloydsTriangle(int n) {
    int num = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}

int main() {
    int rows;

    // Input the number of rows for Floyd's Triangle
    printf("Enter the number of rows for Floyd's Triangle: ");
    scanf("%d", &rows);

    // Print Floyd's Triangle
    printf("Floyd's Triangle:\n");
    printFloydsTriangle(rows);

    return 0;
}
