#include<stdio.h>

int main() {

    int a = 0, b = 20, c = 30;
    printf("%d\n", a > b && c < a);  
    printf("%d\n", b < c && b > a);  

    printf("%d\n", a > b || c < a);  
    printf("%d\n", b < c || b > a); 

    printf("%d\n", !a);
    return 0;
}