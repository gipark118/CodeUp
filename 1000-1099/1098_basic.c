#include <stdio.h>

int main(void)
{
    int h, w, n, l, d;
    int a[101][101] = {};
    int x, y;
    int i, j;

    scanf("%d %d", &h, &w);
    i = 1;
    while (i <= h)       // 격자판 0으로 초기화 단계
    {
        j = 1;
        while (j <= w)
            a[i][j++] = 0;
        i++;
    }
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        scanf("%d %d %d %d", &l, &d, &x, &y);
        if (d == 0)
        {
            j = 1;
            while (j <= l)
            {
                a[x][y++] = 1;
                j++;
            }
        }
        else
        {
            j = 1;
            while (j <= l)
            {
                a[x++][y] = 1;
                j++;
            }
        }
        i++;
    }
    i = 1;
    while (i <= h)
    {
        j = 1;
        while (j <= w)
            printf("%d ", a[i][j++]);
        printf("\n");
        i++;
    }
    return (0);
}
