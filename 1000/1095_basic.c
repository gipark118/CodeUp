#include <stdio.h>

int main(void)
{
    int n, p, min;
    int i;

    i = 0;
    scanf("%d", &n);
    min = 23;
    while (i < n)
    {
        scanf("%d", &p);
        min = min < p ? min : p;
        i++;
    }
    printf("%d", min);
    return (0);
}
