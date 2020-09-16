#include <stdio.h>

int main(void)
{
    int h, b, c, s;
    double bits;
    double mb;

    scanf("%d %d %d %d", &h, &b, &c, &s);
    bits = (double)h * b * c * s;
    mb = bits / 8388608;        // bits >> 23했는데, >>연산은 char, int, short, long, long long 과 각각의 unsigned형에서만 사용 (실수형에는 적용x)
    printf("%.1lf MB", mb);
    return (0);
}
