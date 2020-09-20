#include <stdio.h>

int main(void)
{
    int n, x, y, i, j;
    int a[20][20] = {};

    i = 1;
    while (i <= 19)         // 바둑판 돌 입력.
    {
        j = 1;
        while (j <= 19)
            scanf("%d", &a[i][j++]);
        i++;
    }
    scanf("%d", &n);        // 좌표 개수만큼 입력
    i = 1;
    while (i <= n)          // 좌표 개수 만큼 뒤집기
    {
        scanf("%d %d", &x, &y);
        j = 1;
        while (j <= 19)     // 가로 줄 뒤집기
        {
            if (a[x][j] == 0)
                a[x][j] = 1;
            else
                a[x][j] = 0;
            j++;
        }
        j = 1;
        while (j <= 19)     // 세로 줄 뒤집기
        {
            if (a[j][y] == 0)
                a[j][y] = 1;
            else
                a[j][y] = 0;
            j++;
        }
        i++;
    }
    i = 1;
    while (i <= 19)
    {
        j = 1;
        while (j <= 19)
            printf("%d ", a[i][j++]);
        printf("\n");
        i++;
    }
    return (0);
}
