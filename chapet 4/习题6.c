#include "stdio.h"
#include "stdlib.h"

int main()
{
    double x, y;
    printf("please enter x data: ");
    scanf("%lf", &x);
    if(x<1)
    {
        y = x;
    }
    else if(x>=1 && x<10)
    {
        y = 2*x - 1;
    }
    else
    y = 3*x - 11;

    printf("y = %f",y);

    system('pause');
    return 0;
}