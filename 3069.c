#include <stdio.h>
#include <math.h>


int main()
{
    int n, f, k = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        f = n;
        scanf("%d", &n);
        if (n > f) k++;
    }
    printf("%d", k);
    return 0;
}

