#include <stdio.h>

int main(void)
{
    char a;
    char b;

    b = 'a';
    scanf("%c", &a);
    while (b <= a)
        printf("%c ", b++);
    return (0);
}
