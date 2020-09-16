#include <stdio.h>

int main(void)
{
    int year;
    int month;
    int day;

    scanf("%d.%d.%d", &year, &month, &day);
    printf("%02d-%02d-%04d", day, month, year);
    return (0);
}
