#include <stdio.h>

int main(void)
{
    int year;
    int month;
    int day;

    scanf("%d.%d.%d", &year, &month, &day);
    printf("%04d.%02d.%02d", year, month, day);
    return (0);
}
