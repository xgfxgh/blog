#include "stdio.h"
#include "stdlib.h"

int main()
{
    int n, i;

    printf("please enter a integer number :");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            break;
    }
    if (i < n)
        printf("n=%d is not a prime number ", n);
    else
        printf("n=%d is a prime number", n);

    system("pause");
    return 0;
}