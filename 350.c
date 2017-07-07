#include <stdio.h>


int main()
{
    int a, b, c, d, e, i, k = 0;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    for(i = 0; i <= 1000; i++)
    {
      if((a * i * i * i + b * i * i + c * i + d == 0) && (i - e) != 0)
            k++;

    }
    printf("%d", k);
    return 0;
}

