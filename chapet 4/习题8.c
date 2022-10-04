#include "stdio.h"
#include "stdlib.h"

int main()
{
    char ch;
    float x;
    printf("please enter:");
    scanf("%f", &x);
    printf("you sore:");
    if (x > 100 || x < 0)
        printf("你在做梦\n");
    switch ((int)(x / 10))
    {
    case 0:
        ch = 'E';
        break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        ch = 'D';
        break;
    case 7:
        ch = 'C';
        break;
    case 8:
        ch = 'B';
        break;
    case 9:
        ch = 'A';
        break;
    }
    printf("你的成绩等级为：%c", ch);

    system("pause");
    return 0;
}