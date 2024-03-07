#include<stdio.h>

int main() {
    int *ptr;
    int x;

    ptr = &x;
    *ptr = 0; // x = 0

    printf(" x = %d\n", x); // 0
    printf(" *ptr = %d\n", *ptr); // 0

    *ptr += 18; // 18
    printf(" x = %d\n", x); // 18
    printf(" *ptr = %d\n", *ptr); // 18

    (*ptr)++;
    printf(" x = %d\n", x); // 19
    printf(" *ptr = %d\n", *ptr); // 19

    return 0;
}