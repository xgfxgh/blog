#include "stdio.h"
#include "stdlib.h"

int main()
{
    int a, b, c = 0;
    for (a = 1; a <= 4; a++)
    {
        for (b = 1; b <= 5; b++, c++)
        {
            if (c % 5 == 0)
                printf("\n");
            printf("%d  ", a * b);
        }
    }
    printf("\n");

    system("pause");
    return 0;
}