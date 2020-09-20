#include <stdio.h>

int main(void)
{
    int n;
    int i;

    i = 0;
    scanf("%d", &n);
    while(i < n)
    {
        i++;
        if (i % 3 == 0)
            continue;
        else
            printf("%d ", i);
    }
    return (0);
}
