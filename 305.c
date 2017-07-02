#include <stdio.h>


int main()
{
    int a60 = 0, b20 = 0, c10 = 0, n, d5 = 0, k = 1, e = 0;
    scanf("%d", &n);
    a60 = n / 60;
    e = n % 60;
    if (e >= 36)
        a60++;
    n = n - (a60 * 60);
    b20 = n / 20;
    e = n % 20;
    if (e >= 18)
        b20++;
    n = n - (b20 * 20);
    c10 = n / 10;
    e = n % 10;
    if (e == 9)
        c10++;
    n = n - (c10 * 10);
    d5 = n / 5;
    k1 = n % 5;
    printf("%d %d %d %d %d", k1, d5, c10, b20, a60);
    return 0;
}
