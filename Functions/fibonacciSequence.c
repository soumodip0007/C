#include<stdio.h>

int fibonacci(int n);

int main() {
    printf("%d", fibonacci(6));
    return 0;
}

int fibonacci(int n) {
        if(n == 0) {
            return 0;
        }
        if(n == 1) {
            return 1;
        }
    
    int fibOne = fibonacci(n-1);
    int fibTwo = fibonacci(n-2);
    int fibN = fibOne + fibTwo;
    //printf("fibonacci of %d is : %d \n", n, fibN);
    return fibN;
}