#include <stdio.h>

int main(void)
{
    int n;
    int i;

    i = 1;
    scanf("%d", &n);
    while (i <= n)
    {
        if (i % 3 == 0)
            printf("X ");
        else
            printf("%d ", i);
        i++;
    }
    return (0);
}
