#include "stdio.h"
#include "stdlib.h"-

int main()
{
    int a, b, c;
    printf("输出三个数： ");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c)
    printf("a=%d\n", a);
    if(b>a && b>c)
    printf("b=%d\n", b);                      
    if(c>a && c>b)
    printf("c=%d",c);

    system('pause');
    return 0;
}