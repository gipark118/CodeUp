#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, r, n;
    long long result;

    scanf("%d %d %d", &a, &r, &n);
    result = a * pow(r, n - 1);             // 등비 수열
    printf("%lld", result);
    return (0);
}

/*
    math.h 헤더 안쓰고 하는법.

    result = a 넣어놓고,
    int i = 1;
    while (i < n)
        result *= r;
    pint("%lld", result); 하면됨.
*/
