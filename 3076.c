#include <stdio.h>
#include <math.h>


int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    while(n != m)
    {
        if(n % 2 != 0 || n / 2 < m)
        {
            n--;
            printf("-1\n");
        }
        else if(n / 2 >= m)
        {
            n = n / 2;
            printf(":2\n");
        }
    }
    return 0;
}

