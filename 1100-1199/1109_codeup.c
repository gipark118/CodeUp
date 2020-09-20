#include <stdio.h>

int main(void)
{
    char s[21] = {};
    int age;
    char code;
    float key;

    scanf("%s %d %c %f", &s, &age, &code, &key);
    printf("%s\n%d\n%c\n%g", s, age, code, key);
    return (0);
}
