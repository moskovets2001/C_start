#include <stdio.h>


int main()
{
    long long n, sum;

    scanf("%lld", &n);
    if(n < 0)
        n  = -n;
    if(n % 2 == 0)
        sum = (1 + n) * (n / 2);
    else
        sum = ((n + 1) / 2) * n;
    printf("%lld", sum);
    return 0;
}
