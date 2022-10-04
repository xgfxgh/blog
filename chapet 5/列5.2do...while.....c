#include "stdio.h"
#include "stdlib.h"

int main()
{
    int i = 1, suma = 0;
    do
    {
        suma = suma + i;
        i = i + 1;
    } while (i <= 100);
    printf("suma = %d\n", suma);

    system("pause");
    return 0;
}