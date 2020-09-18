#include <stdio.h>

int main(void)
{
    int i;

    i = 0;
    while (i < 20)
    {
        printf("hello");
        i++;
    }
    printf(" ");
    i = 0;
    while (i < 30)
    {
        printf("world");
        i++;
    }
    return (0);
}
