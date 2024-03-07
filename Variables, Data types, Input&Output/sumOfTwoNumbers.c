#include <stdio.h>
int main()
{
    int a, b;
    printf("enter a \n");
    scanf("%d", &a);

    printf("enter b \n");
    scanf("%d", &b);

    int sum = a + b;
    printf("sum of a & b is : %d \n", sum);
    //printf("sum of a & b is : %d \n", a + b);

    return 0;
}