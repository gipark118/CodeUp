#include <stdio.h>

int main(void)
{
    int n;
    int sum;

    sum = 0;
    scanf("%d", &n);
    while (n)
    {
        if (n % 2 == 0)
            sum += n;
        n--;
    }
    printf("%d", sum);
    return (0);
}
