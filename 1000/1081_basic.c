#include <stdio.h>

int main(void)
{
    int a, b;
    int i, j;

    i = 1;
    scanf("%d %d", &a, &b);
    while (i <= a)
    {
        j = 1;
        while (j <= b)
        {
            printf("%d %d\n", i, j);
            j++;
        }
        i++;
    }
    return (0);
}
