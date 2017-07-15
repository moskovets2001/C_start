#include <stdio.h>
#include <limits.h>


int main()
{
    int a, b, c, col = 0, i = 0, min = 0;
    if(scanf("%d%d%d", &a, &b, &c) != 3)
        printf("0");
    else
    {
        while (c != 0)
        {
            i++;
            if(a < b && b > c)
            {
                if(col != 0)
                {
                    if(min > i - col || min == 0)
                        min = i - col;
                }
                col = i;
            }
            a = b;
            b = c;
            scanf("%d", &c);
        }
    }
    printf("%d", min);
    return 0;
}
