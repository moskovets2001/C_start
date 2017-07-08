#include <stdio.h>


int main()
{
    int n, s = 2;
    scanf("%d", &n);
    while (n % 2 == 0 && n != 1)
        n = n / 2;

    if (n == 1)
        printf("YES");
    else
        printf("NO");
    return 0;
}

