#include<stdio.h>

int factorial(int n);

int main() {
    printf("factorial is : %d", factorial(5));
    return 0;
}

// recursive function

int factorial(int n) {
    if(n == 1) {
        return 1;
    }
    int fact = factorial(n-1);
    int factOne = fact * n;
    return factOne;
}