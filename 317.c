#include <stdio.h>




int main()
{
    int  n, k, c, n1 = 1, i, q = 1;

    scanf("%d%d", &n, &k);
    for(i = k; i <= n; i++)
        n1 *= i;
    for(i = 1; i <= (n - k); i++)
        q *= i;
    c = n1/q;
    printf("%d", c);
    return 0;

}

