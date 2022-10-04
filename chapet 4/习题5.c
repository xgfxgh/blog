#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main()
{
    int x, j, flag = 1;
    printf("please enter one data:  ");
    scanf("%d", &x);

    for (; flag;)
    {
        if (x > 1000 || x < 0)

        {
            flag = 1;
            printf("enter the data again!\n");
            scanf("%d", &x);
        }
        else
        {
            flag = 0;
            j = sqrt(x);
        }
    }

    printf("j=%d\n", j);

    system("pause");
    return 0;
}