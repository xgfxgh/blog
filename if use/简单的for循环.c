#include "stdio.h"
#include "stdlib.h"

int main()
{
    int i , sum = 0;

    for ( i = 0; i <= 9999; i++)
    {
        sum = sum + i;
    }
    printf("sum = %d\n", sum);
    
    system ("pause");
}