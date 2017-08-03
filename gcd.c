#include <stdio.h>

int gcd(int a, int b);
int main()
{
    long long a, b;
    scanf("%d %d", &a, &b);
    printf("%d", gcd(a, b));
    return 0;
}
int gcd(int a, int b)
{
	if (b == 0)
		return a;
    else
        return gcd(b, a % b);
}
