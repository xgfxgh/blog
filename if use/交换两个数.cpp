#include <stdio.h>

int main()
{
	int a = 3, b = 5, c;
	
	c = a;
	a = b;
	b = c;
	
	printf("a = %d b = %d", a, b);
	
	return 0;
}
