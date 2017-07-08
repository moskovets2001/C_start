#include <stdio.h>
#include <math.h>


int main()
{
    int n, i;
    double sum = 0, f = 1;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        f *= i;

        sum = sum + 1/f;
    }
    sum++;
    printf("%.5lf", sum);
    return 0;
}

