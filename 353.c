#include <stdio.h>
#include <math.h>


int main()
{
    int n, sum;
    scanf("%d", &n);
    sum = (pow(2, n) - 1)*2;
    printf("%d", sum+1);
    return 0;
}

