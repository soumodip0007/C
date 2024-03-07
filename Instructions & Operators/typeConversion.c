#include <stdio.h>
int main()
{
    //Implicit conversion
    int a = 10;
    char b = 'b'; 
    a = a + b;  //y will implicitly converted to int. ASCII
    float c = a + 1.0;
    printf("x = %d, z = %f", a, c);

    //Explicit conversion
    double x = 1.2;
    int sum = (int)x + 1;
    printf("sum = %d", sum);
   
    //return 0;
}
