#include "stdio.h"
#include "stdlib.h"

int main()
{
    int a, b, c = 0;
    char ch;
    while (1)
    {
        printf("输入一个数字：");
        scanf("%d", &a);
        b = a;
        while (b)
        {
            c = c * 10 + b % 10;
            b = b / 10;
        }
        if (a == c)

            printf("yes\n");

        else
            printf("no\n");
        c = 0;
    }

    system("pause");
    return 0;
}