#include <stdio.h>
#include <math.h>


int main()
{
    int n, f, k = 0, max = 1;
    scanf("%d", &n);
    while (n != 0)
    {
        f = n;
        scanf("%d", &n);
        k++;
        while (f == n)
        {
            f = n;
            scanf("%d", &n);
            k++;
        }

        if (k > max)
            max = k;
        k = 0;
    }
    printf("%d", max);
    return 0;
}

