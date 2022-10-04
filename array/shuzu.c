#include "stdio.h"
#include "stdlib.h"

int main()
{
    int a[5] = {1, 2, 3, 4, 5}; // a数组的名字；5代表五个元素；并且这五个元素分别用啊a[0],a[1]...a[4]表示；
    int i;

    for (i = 0; i <= 5; i++)
        printf("%d\n", a[i]);

    system("pause");
    return 0;
}