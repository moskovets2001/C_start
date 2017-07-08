#include <stdio.h>
#include <math.h>


int main()
{
    int n, f, k = 0, max = 0;

        while (n != 0)
        {
            scanf("%d", &n);
            if(n == f)
                k++;
            else
            {
                if (k > max)
                    max = k;
                k = 1;
                f = n;
            }
        }
    printf("%d", max);
    return 0;
}

