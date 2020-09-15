#include <stdio.h>

int main(void)
{
    char    word[21];
    int     i;

    i = 0;
    scanf("%s", &word);
    while (word[i])
        printf("\'%c\'\n", word[i++]);
    return (0);
}
