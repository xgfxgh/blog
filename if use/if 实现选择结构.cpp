#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, t;

    printf("输出两个数: ");
    scanf("%d %d", &a, &b);
    if(a<b)
    {
        t = b;
        b = a;
        a = t;
     
    }
    
    printf("%d %d", a, b);

    system ("pause");
}