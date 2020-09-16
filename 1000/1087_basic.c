#include <stdio.h>

int main(void)
{
    int n;
    int sum;
    int result;

    n = 0;
    result = 0;
    scanf("%d", &sum);
    while (sum > result)
        result += n++;
    printf("%d", result);
    return (0);
}
