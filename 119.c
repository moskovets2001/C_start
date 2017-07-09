#include <stdio.h>

int reverse(int n);

int main()
{
    int n, m, i, k = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        m = reverse(i);
        if(i == m)
            k++;
    }
    printf("%d", k);
   return 0;
}
int reverse(int n)
{
    int k = 0, m = 1000000, o, l = 1;
    while(n / m < 1) m = m / 10;
    while(n >= 10)
    {
        o = n / m;
        k = k + o*l;
        l = l * 10;
        n = n - o * m;
        m = m / 10;
    }
    return k + n;
}
