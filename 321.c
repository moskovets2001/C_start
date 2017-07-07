#include <stdio.h>




int main()
{
    double n, sum = 0, i, m = -1;
    scanf("%lf", &n);
    for(i = 1; i <= (2*n+1); i+=2)
    {
        m = - m;
        sum = sum + m/i;
    }
    printf("%lf", 4*sum);
    return 0;
}

