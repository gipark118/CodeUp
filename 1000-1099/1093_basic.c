#include <stdio.h>

int main(void)
{
    int n, m;
    int a[23] = {};
    int i;

    i = 1;
    scanf("%d", &n);
    while (i <= n)
    {
        scanf("%d", &m);
        a[m - 1] += 1;
        i++;
    }
    i = 0;
    while (i < 23)
        printf("%d ", a[i++]);
    return (0);
}
