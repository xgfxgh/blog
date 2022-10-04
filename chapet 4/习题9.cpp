#include "stdio.h"
#include "stdlib.h"

int main()
{
    int num, indiv, ten, hundred, thousand, ten_thousand, place;
    printf("输入一个正整数(0~100000):");
    scanf("%d", &num);
    if (num > 9999)
        place = 5;
    else if (num > 999)
        place = 4;
    else if (num > 99)
        place = 3;
    else if (num > 9)
        place = 2;
    else
        place = 1;

    printf("\n输出数的位数:");

    ten_thousand = num / 10000;
    thousand = (int)(num - ten_thousand * 10000) / 1000;
    hundred = (int)(num - ten_thousand * 10000 - thousand * 1000) / 100;
    ten = (int)(num - ten_thousand * 10000 - thousand * 1000 - hundred * 100) / 10;
    indiv = (int)(num - ten_thousand * 10000 - thousand * 1000 - hundred * 100 - ten * 10);

    if (place == 5)
    {
        printf("%d %d %d %d %d\n", ten_thousand, thousand, hundred, ten, indiv);
        printf("反序数字为:");
        printf("%d%d%d%d%d\n", indiv, ten, hundred, thousand, ten_thousand);
    }
    else if (place == 4)
    {
        printf("%d %d %d %d\n", thousand, hundred, ten, indiv);
        printf("反序数字为:");
        printf("%d%d%d%d\n", indiv, ten, hundred, thousand);
    }
    else if (place == 3)
    {
        printf("%d %d %d\n", hundred, ten, indiv);
        printf("反序数字为:");
        printf("%d%d%d\n", indiv, ten, hundred);
    }
    else if (place == 2)
    {
        printf("%d %d\n", ten, indiv);
        printf("反序数字为:");
        printf("%d%d\n", indiv, ten);
    }
    else if (place == 1)
    {
        printf("%d", indiv);
        printf("反序数字为:");
        printf("%d", indiv);
    }

    system("pause");
    return 0;
}