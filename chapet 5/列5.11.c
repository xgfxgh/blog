#include "stdio.h"
#include "stdlib.h"

int main()
{
    char c;
    scanf(" %c", &c);
    // c = getchar();
    for (; c != '\n';)
    {
        ;
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'z')
        {
            if (c >= 'w' && c <= 'z' || c >= 'W' && c <= 'Z')
                c = c - 22;
            else
                c = c + 4;
        }
        printf("%c", c);
        scanf(" %c", &c);
        // c = getchar();
    }
    printf("\n");

    system("pause");
    return 0;
}