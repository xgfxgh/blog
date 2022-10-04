#include "stdio.h"
#include "stdlib.h"

int main()
{
    int i;
    for (i = 100; i <= 200; i++)
    {
        if (i % 3 == 0)
            continue;
        printf("%d\n", i);
    }

    system("pause");
    return 0;
}