#include "stdio.h"
#include "stdlib.h"

int main()
{
    int a[7] = {1, 2, 3, 4, 5, 6, 7};
    int c = 6, b = 0, t;
    while (c > b)
    {
        t = a[c];
        a[c] = a[b];
        a[b] = t;
        c--;
        b++;
    }
    for (b = 0; b <= 6; b++)
        printf("%d\n", a[b]);

    system("pause");
    return 0;
}