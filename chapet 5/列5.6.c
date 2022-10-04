#include "stdio.h"
#include "stdlib.h"

int main()
{
    int a, b;
    for (a = 1; a <= 4; a++)
    {
        for (b = 1; b <= 5; b++)
            printf("%d  ", a * b);
        printf("\n");
    }

    system("pause");
    return 0;
}