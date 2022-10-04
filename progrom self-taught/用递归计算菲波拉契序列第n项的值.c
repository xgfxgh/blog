#include "stdio.h"
#include "stdlib.h"

int main()
{
    int a, n;
    int f1, f2, f3;
    f1 = 1;
    f2 = 2;
    do
    {

        printf("输入n的值:");
        scanf("%d", &n);
        if (n == 1)
            f3 = 1;
        if (n == 2)
            f3 = 2;
        if (n >= 3)
        {
            for (a = 3; a <= n; a += 1)
            {
                f3 = f1 + f2;
                f1 = f2;
                f2 = f3;
            }
        }
        printf("f3=%d\n", f3);
        f1 = 1;
        f2 = 2;
    } while (1);
    system("pause");
    return 0;
}