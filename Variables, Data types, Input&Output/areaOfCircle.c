#include <stdio.h>
// area of square
int main()
{
    float radius, area;
    printf("Enter radius \n");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    printf("%f", area);
    
    return 0;
}