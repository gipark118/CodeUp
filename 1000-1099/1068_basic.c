#include <stdio.h>

int main(void)
{
    int a;

    scanf("%d", &a);
    if (90 <= a && a <= 100)
        printf("A");
    else if (70 <= a && a < 90)
        printf("B");
    else if (40 <= a && a < 70)
        printf("C");
    else if (0 <= a && a < 40)
        printf("D");
    return (0);
}
