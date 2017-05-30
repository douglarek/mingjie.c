#include <stdio.h>

int main(void)
{
    int a, b;

    puts("请输入两个整数。");
    printf("整数 A："); scanf("%d", &a);
    printf("整数 B："); scanf("%d", &b);
    printf("A是B的%f%%\n", a * 100.0 / b);

    return 0;
}
