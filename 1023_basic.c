#include <stdio.h>

/*
**  부동소수점의 오차에 의해서 결과값이 다르게 출력됨.
**  반올림하는 코드를 작성해서 해결할 수 있지만,
**  이 문제에선 굳이 할 필요없는 것 같다.
int main(void)
{
    float   f;
    int     division_n;
    int     n1;
    int     n2;

    division_n = 1000000;
    scanf("%f", &f);
    n1 = f * division_n;
    n2 = n1 % division_n;
    while (division_n / 10 != 0)
    {
        if (n2 % division_n == 0)
            n2 = n2 / division_n;
        division_n /= 10;
    }
    if (n2 < 0)
        n2 *= -1;
    printf("%d\n", (int)f);
    printf("%d\n", n2);
    return (0);
}
*/

int main(void)
{
    int n1;
    int n2;

    scanf("%d.%d", &n1, &n2);
    printf("%d\n%d", n1, n2);
    return (0);
}
