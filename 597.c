#include <stdio.h>
#include <math.h>
#define EPS 0.000001

int main()
{
    float x, y, sum;
    int c = 1;
    scanf("%f%f", &x, &y);
    sum = x;
    if(x >= y)
    {
            printf("1");
        return 0;
    }
    while(sum < y || fabs((x - sum) > EPS))
    {
        c++;
        sum = 1.7 * sum + sum;
    }
    printf("%d", c+1);
    return 0;
}
