#include <stdio.h> 

int main() 
{ 
	int a = 10, b = 20, c = 30, value; 

	value = (a > b) ? a : b;
    printf("%d\n", value);
    
    
    value = (a>b) ? (a>c ? a:c) : (b>c ? b:c);
    printf("%d", value);

	return 0; 
}
