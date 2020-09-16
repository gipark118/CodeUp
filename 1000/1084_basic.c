#include <stdio.h>

int main(void)
{
    int i, j, k;
    int r, g, b;
    int count;

    i = 0;
    count = 0;
    scanf("%d %d %d", &r, &g, &b);
    while (i < r)
    {
        j = 0;
        while (j < g)
        {
            k = 0;
            while (k < b)
            {
                printf("%d %d %d\n", i, j, k);
                count++;
                k++;
            }
            j++;
        }
        i++;
    }
    printf("%d", count);
    return (0);
}
