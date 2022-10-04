#include "stdio.h"
#include "stdlib.h"

int main()
{
    int a, b, t;
    printf("a b的值");
    scanf("%d %d", &a, &b);
    if(a>b)
    {
        t = b;
        b = a;
        a = t;
    }
    printf("a = %d b = %d", a, b);
    system ("pause");
}