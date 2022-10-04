#include "stdio.h"
#include "stdlib.h"

int main()
{
    int x, y;
    // printf("输出X的值: ");
    // scanf("%d", &x);
    // if(x>0)
    // {
    //     y = 1;
    // }
    // else if(x==0)
    // {
    //     y = 0;
    // }
    // else
    // {
    //     y = -1;
    // }
    // printf("%d", y);
    printf("输出x的值: ");
    scanf("%d", &x);
    if(x>=0)
    {
        if(x>0)
        {
            y = 1;
        }
        else if(x == 0)
        {
            y = 0;
        }
    }
    else
    {
        y = -1;
    }
    printf("y = %d",y);


    system ("pause");
}