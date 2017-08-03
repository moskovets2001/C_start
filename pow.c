#include <stdio.h>

int pow(int a, int n);
int main()
{
    long long a, n;
    scanf("%d %d", &a, &n);
    printf("%d", pow(a, n));
    return 0;
}
int pow (int a, int n)
{
    long long res;
	if (n == 0)
		return 1;
	if (n % 2 == 1)
		return pow(a, n - 1) * a;
	else
    {
		res = pow(a, n / 2);
		return res * res;
	}
}
