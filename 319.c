#include <stdio.h>




int main()
{
    double a, a1, i, c = 0;
    double n;
    scanf("%lf%lf", &a, &n);
    a1 = a;
    if(n == 0)
    {
        printf("1");
        return 0;
    }
    for(i = 1; i < n; i++)
    {
        a1 *= a;
        c += a1;
    }
    printf("%lf", c + a + 1);
    return 0;

}

