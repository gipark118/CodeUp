#include <stdio.h>

int main(void)
{
    int a, m, d, n;
    int i;
    long long result;

    i = 1;
    scanf("%d %d %d %d", &a, &m, &d, &n);
    result = a;
    while (i < n)
    {
        result = result * m + d;
        i++;
    }
    printf("%lld", result);
    return (0);
}
