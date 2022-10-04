#include "stdio.h"
#include "stdlib.h"

int main()
{
    int a = 1, b = 10, c = 100, d = 1000, e;

    scanf("%d", &e);

    if (e >= a && e <= b || e >= c && e <= d)
        e = e + 3;

    printf("%d", e);

    system("pause");
    return 0;
}