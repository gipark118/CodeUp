#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char    snum[6];
    int     inum;
    int     five;

    five = 10000;
    scanf("%s", &snum);
    inum = atoi(snum);
    while (five != 0)
    {
        printf("[%d]\n", inum - (inum % five));
        inum = inum % five;
        five /= 10;
    }
    return (0);
}

/*
    scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
    printf("[%d]", a*10000);
    printf("[%d]", b*1000);
    printf("[%d]", c*100);
    printf("[%d]", d*10);
    printf("[%d]", e*1);
*/
