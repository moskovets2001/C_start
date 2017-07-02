#include <stdio.h>


int main()
{
    int x;
    scanf("%d", &x);
    while (x > 10)
        x = x - 3;
    if (x == 10 || x == 9 || x == 8 || x == 3 || x == 5)
        printf("YES");
    else
        printf("NO");
    return 0;
}
