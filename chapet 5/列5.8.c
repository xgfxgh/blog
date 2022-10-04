#include "stdio.h"
#include "stdlib.h"

int main()
{
    int f1 = 1, f2 = 1, f3, m, a;
    char ch;

    printf("输入一个数：");
    scanf("%d", &m);

    do
    {
        if (m == 1)
            f3 = 1;
        else if (m == 2)
            f3 = 1;
        else if (m >= 3)
        {

            for (a = 3; a <= m; a += 1)
            {
                f3 = f2 + f1;
                f1 = f2;
                f2 = f3;
            }
        }
        printf("f3=%d\n", f3);
        f1 = 1;
        f2 = 1;
        printf("是否继续(Y/N)");
        scanf(" %c", &ch);
        if (ch == 'y' || ch == 'Y')
        {
            printf("输入一个数：");
            scanf("%d", &m);
        }
        else
            break;

    } while (1);

    system("pause");
    return 0;
}