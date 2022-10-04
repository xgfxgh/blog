#include "stdio.h"
#include "stdlib.h"

int main()
{
    int val, m, sum = 0;
    printf("输入您需要判断的数字:");
    scanf("%d", &val);
    m = val;
    while (m)
    {
        sum = sum * 10 + m % 10;
        m /= 10;
    }
    if (sum == val)
        printf("Yes\n");
    else
        printf("No\n");

    system("pause");
    return 0;
}