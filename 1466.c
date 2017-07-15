#include <stdio.h>


int main()
{
    long long N, M;

    scanf("%lld", &N);

    if(N <= 0)
    {
        M  = -N;
        if(M % 2 == 0)
            printf("%lld", 1 - (M / 2) * (M + 1));
        else
            printf("%lld", 1 - ((M + 1) / 2) * M);
    }
    else
    {
        if(N % 2 == 0)
            printf("%lld", (N / 2) * (N + 1));
        else
            printf("%lld", N * ((N + 1) / 2));
    }
    return 0;
}
