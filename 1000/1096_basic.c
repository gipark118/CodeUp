#include <stdio.h>

int main(void)
{
    int n, i, j, x, y;
    int a[20][20] = {};
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        scanf("%d %d", &x, &y);
        a[x][y] = 1;
        i++;
    }
    i = 1;
    while (i <= 19)
    {
        j = 1;
        while (j <= 19)
        {
            printf("%d ", a[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    return (0);
}
