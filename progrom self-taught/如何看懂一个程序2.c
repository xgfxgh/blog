#include "stdio.h"
#include "stdlib.h"
/*
      用递归计算菲波拉契序列第n项的值
      f(0) =0; f(1) = 1; f(2) = 2; f(3) = 3;
      f(n) = f(n-1) + f(n-2)
*/

int main()
{
    int n, i;
    int f1, f2, f3;

    f1 = 1;
    f2 = 2;
    printf("请输入你需要求的序列：");
    scanf("%d", &n);
    if (1 == n)
    {
        f3 = 1;
    }
    else if (2 == n)
    {
        f3 = 2;
    }
    else
    {
        for (i = 3; i <= n; i = i + 1)
        {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
    }
    printf("%d\n", f3);

    system("pause");
    return 0;
}