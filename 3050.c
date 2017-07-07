#include <stdio.h>


int main()
{
    int n, s = 1;
    scanf("%d", &n);
    while (s < n)
        s = s*2;

    if (s == n)
        printf("YES");
    else
        printf("NO");
    return 0;
}

