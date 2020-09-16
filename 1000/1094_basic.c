#include <stdio.h>

int main(void)
{
    int n;
    int a[10000] = {};
    int i;

    i = 0;
    scanf("%d", &n);
    while (i < n)
        scanf("%d", &a[i++]);
    while (i > 0)
        printf("%d ", a[--i]);
    return (0);
}
