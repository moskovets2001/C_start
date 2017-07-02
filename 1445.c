#include <stdio.h>


int main()
{
    int x, y, m, n;
    scanf("%d %d", &m, &n);
    scanf("%d %d", &x, &y);
    if (y - 1 >= 1)
        printf("%d %d\n", x, y - 1);
    if (x - 1 >= 1)
        printf("%d %d\n", x - 1, y);
    if (y + 1 <= n)
        printf("%d %d\n", x, y + 1);
    if (x + 1 <= m)
        printf("%d %d\n", x + 1, y);

    return 0;
}
