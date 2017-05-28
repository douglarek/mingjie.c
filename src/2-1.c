#include <stdio.h>

int main(void)
{
    int a, b;

    puts("请输入两个整数。");
    printf("整数 A："); scanf("%d", &a);
    printf("整数 B："); scanf("%d", &b);
    printf("A的值是B的%d%%\n", a * 100 / b);

    return 0;
}
