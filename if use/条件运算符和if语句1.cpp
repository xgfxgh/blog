#include "stdio.h"
#include "stdlib.h"

int main()
{
    char c1;
    // printf("输出一个字母： ");
    // scanf("%c", &c1);
    // if (c1>'A' && c1<'Z')
    // {
    //     c1 = c1 + 32;

    //     printf("%c\n", c1);
    // }
    // else if(c1>'a' && c1<'z')
    // {
    //     printf("%c\n", c1);
    // }
    printf("输出一个字母： ");
    scanf("%c", &c1);

    c1 = (c1>'A' && c1<'Z') ? c1 +32 : c1;

    printf("%c\n", c1);
    
    system ("pause");


}