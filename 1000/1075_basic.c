#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);
    while (n)
        printf("%d\n", --n);
    return (0);
}
