#include <stdio.h>
#include <math.h>


int main()
{
    int a, b, c, col = 0;
    if(scanf("%d%d%d", &a, &b, &c) != 3)
        printf("0");
    else
    {
        while (c != 0)
        {
            if(a < b && b > c)
                col++;
            a = b;
            b = c;
            scanf("%d", &c);
        }
    }
    printf("%d", col);
    return 0;
}

