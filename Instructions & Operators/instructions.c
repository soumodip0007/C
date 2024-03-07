#include <stdio.h>
int main()
{
    int age = 18;
    int ageOne = age;
    int ageTwo = ageOne + 1;
    printf("new age is : %d", ageTwo);
    int x = 1, y;
    y = 2;
    
    /* int a = 24;
    int sum = a * b;
    int b = 3; */
    
    // valid declaration 
    int a, b, c;
    a = b = c = 50;

    // invalid
    // int a = b = c = 22;
    return 0;
}
