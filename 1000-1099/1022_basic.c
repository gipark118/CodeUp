#include <stdio.h>

int main(void)
{
    char str[2001];

    //fgets(str, 2000, stdin);
    scanf("%[^\n]s", &str);
    printf("%s", str);
    return (0);
}
