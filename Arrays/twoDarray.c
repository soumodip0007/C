#include<stdio.h>

int main() {
    //2 * 3
    int x[2][3];
    x[0][0] = 10;
    x[0][1] = 20;
    x[0][2] = 30;
    
    x[1][0] = 40;
    x[1][1] = 50;
    x[1][2] = 60;

    printf("%d\n", x[0][1]);

    // 3 * 2
    int y[3][2] = { { 10, 20 }, { 30, 40 }, { 50, 60 } };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Element at y[%i][%i]: ", i, j);
            printf("%d\n", y[i][j]);
        }
    }
    return 0;
}