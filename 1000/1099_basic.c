#include <stdio.h>

int main(void)
{
    int a[11][11] = {};
    int i, j;
    int x, y;

    i = 1;
    while (i <= 10)
    {
        j = 1;
        while (j <= 10)
            scanf("%d ", &a[i][j++]);
        i++;
    }
    x = 2;
    y = 2;
    while (1)
    {
        if (a[x][y] == 0)
        {
            a[x][y] = 9;
            y++;
        }
        if (a[x][y] == 1)
        {
            y--;
            x++;
        }
        if (a[x][y] == 2)
        {
            a[x][y] = 9;
            break;
        }
        else if (a[x + 1][y] == 1 && a[x][y + 1] == 1)
        {
            if (a[x][y] == 0)
                a[x][y] = 9;
            break;
        }
    }
    i = 1;
    while (i <= 10)
    {
        j = 1;
        while (j <= 10)
            printf("%d ", a[i][j++]);
        printf("\n");
        i++;
    }
    return (0);
}


/*
#include <stdio.h>
int map[12][12];

void back(int r, int c)
{
	if(map[r][c] == 2)
	{
			map[r][c] = 9;
			return ;
	}
	map[r][c] = 9;

	if(map[r][c+1] != 1)
		back(r, c+1);
	else if(map[r+1][c] != 1)
		back(r+1, c);
}

int main()
{
	int i, j;
	for(i = 1; i <= 10; i++)
		for(j = 1; j <= 10; j++)
			scanf("%d", &map[i][j]);
	back(2, 2);

	for(i = 1; i <= 10; i++,puts(""))
		for(j = 1; j <= 10; j++)
			printf("%d ", map[i][j]);
}

*/
