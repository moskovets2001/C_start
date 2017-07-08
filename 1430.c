#include <stdio.h>

int main()
{
    int n, i, j, count = 0;

    scanf("%d", &n);
    if (n == 1)
        printf("1");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < i && count != n; j++)
        {
            printf("%d ", i);
            count++;
        }
    }
    return 0;
}
