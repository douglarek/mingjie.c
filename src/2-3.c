#include <stdio.h>

int main(void)
{
    double vx;

    printf("请输入一个实数："); scanf("%lf", &vx); // here `l` (L) is not 1
    printf("你输入的是%f\n", vx);

    return 0;
}
