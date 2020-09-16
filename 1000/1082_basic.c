#include <stdio.h>

int main(void)
{
    int n;
    int i;

    i = 1;
    scanf("%X", &n);
    while (i <= 0XF)
    {
        printf("%X*%X=%X\n", n, i, n*i);
        i++;
    }
    return (0);
}
