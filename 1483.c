#include <stdio.h>

int reverse(int n);

int main()
{
    int h, m, s, h2, m2, s2, k, l;
    scanf("%d %d %d", &h, &m, &s);
    scanf("%d %d %d", &h2, &m2, &s2);
    k  = h * 3600;
    k += m * 60;
    k += s;

    l  = h2 * 3600;
    l += m2 * 60;
    l += s2;

    printf("%d", l - k);
    return 0;
}
