#include <stdio.h>
int main()
{
	int marks = 95;
	if (marks <= 100 && marks >= 90)
		printf("A+");
	else if (marks < 90 && marks >= 80)
		printf("A");
	else if (marks < 80 && marks >= 70)
		printf("B");
	else if (marks < 70 && marks >= 60)
		printf("C");
	else if (marks < 60 && marks >= 50)
		printf("D");
	else
		printf("F");
	return 0;
}
