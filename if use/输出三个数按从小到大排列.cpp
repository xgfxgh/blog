#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, t;
    printf("输出liang个数\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a>b)
    {
        t = b;
        b = a;
        a = t;
    }
    if (a>c)
    {
        t = c;
        c = a;
        a = t;
    }
    
     if(b>c)
    {
        t = b;
        b = c;
        c = t;
    }
    printf("%d %d %d\n", a, b, c);

    system ("pause");

}
