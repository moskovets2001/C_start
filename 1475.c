#include <stdio.h>


int main()
{
    int k, h, m;
    scanf("%d", &k);
    h = k / 3600;
    m = k - (h * 3600);
    h = h % 24;
    m = m / 60;
    printf("It is %d hours %d minutes.", h, m);
    return 0;
}
