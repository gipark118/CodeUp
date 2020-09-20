#include <stdio.h>

int main(void)
{
    int a, d, n;
    int result;

    scanf("%d %d %d", &a, &d, &n);
    result = a + d * (n - 1);           // 등차수열
    printf("%d", result);
    return (0);
}
