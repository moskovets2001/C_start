#include <stdio.h>

int main()
{
    int n, i, j, j1 = 0;

    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            if(j1 == n) break;
            printf("%d ", i);
            j1++;
        }

    }
    return 0;
}
