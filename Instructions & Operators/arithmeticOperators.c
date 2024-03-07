#include <stdio.h>
int main()
{
	int a = 100, b = 50, result;

	printf("a = %d and b = %d\n", a, b);

	result = a + b;
	printf("a + b = %d\n", result);

	result = a - b;
	printf("a - b = %d\n", result);

	result = a * b;
	printf("a * b = %d\n", result);

	result = a / b;
	printf("a / b = %d\n", result);

	result = a % b;
	printf("a %% b = %d\n", result);

	return 0;
}
