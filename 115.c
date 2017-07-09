#include <stdio.h>

int NumberOfZeroes(int n);

int main()
{
    int n;
    scanf("%d", &n);
    n = NumberOfZeroes(n);
    printf("%d", n);
    return 0;
}
int NumberOfZeroes(int n)
{
    int k = 0;
    while(n >= 10)
    {
        if(n % 10 == 0)
            k++;

        n = n / 10;
    }
    return k;
}
