#include <stdio.h>
#include <math.h>


int main()
{
    int n, i, j, f = 1;
    double sum;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
            f *= j;

       sum = sum + 1/f;
    }
    sum++;
    printf("%.5lf", sum);
    return 0;
}

