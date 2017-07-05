#include <stdio.h>




int main()
{
    double n, sum = 0, i;
    scanf("%lf", &n);
    for(i = 1; i <= n; i++)
        sum = sum + (1/(i*i));

    printf("%lf", sum);
    return 0;
}

