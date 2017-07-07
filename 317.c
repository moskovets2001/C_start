#include <stdio.h>




int main()
{
    int  n, k, c, k1 = 1, n1 = 1, i, q = 1;

    scanf("%d%d", &n, &k);
    for(i = 1; i <= n; i++)
        n1 *= i;
    for(i = 1; i <= k; i++)
        k1 *= i;
    for(i = 1; i <= (n - k); i++)
        q *= i;
    c = n1/(k1 * q);
    printf("%d", c);
    return 0;

}

