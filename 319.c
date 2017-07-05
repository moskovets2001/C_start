#include <stdio.h>




int main()
{
    double a, a1, i, c = 0;
    double n;
    scanf("%lf%lf", &a, &n);
    a1 = a;
    for(i = 1; i < n; i++)
    {
        c += a1*a;
        a1 *= a;
    }
    printf("%lf", c + a + 1);
    return 0;

}

