#include "stdio.h"
#include "stdlib.h"
#define SUM 100000

int main()
{
    float total, aver, amount;
    int i;
    for (i = 1, total = 0; i <= 1000; i++)
    {
        printf("please enter amount:  ");
        scanf("%f", &amount);
        total = total + amount;
        if (total >= SUM)
            break;
    }
    aver = total / i;
    printf("捐款人数=%d\naver=%f", i, aver);

    system("pause");
    return 0;
}