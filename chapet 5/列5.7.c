#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main()
{
    int sign = 1;
    double pi = 0.0, term = 1.0, n = 1.0;

    // while (fabs(term) >= 1e-6)
    // {
    //     pi = pi + term;
    //     n = n + 2;
    //     sign = -sign;
    //     term = sign / n;
    // }
    // pi = pi * 4;
    // printf("shuru%10.8f\n", pi);
    for (n = 1.0; fabs(term) >= 1e-6; n += 2)
    {

        term = sign / n;
        sign = -sign;
        pi = pi + term;
    }
    pi = pi * 4;
    printf("%10.8f\n", pi);
    system("pause");
    return 0;
}