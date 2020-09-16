#include <stdio.h>

int main(void)
{
    int id1;
    int id2;

    scanf("%d-%d", &id1, &id2);
    printf("%06d%07d", id1, id2);
    return (0);
}
