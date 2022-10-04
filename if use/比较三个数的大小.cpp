#include <stdio.h>

int main()
{
	int a, b, c; b
	printf("比较三个数：a = \n b = \n c = \n");
	scanf("%d %d %d", &a, &b, &c);
	if(a > b && a > c)
	printf("最大值a = %d\n", a);
	else if(b > a && b > c)
	printf("最大值b = %d\n", b);
	else
	printf("最大值c = %d\n", c);
	
	return 0;
}
