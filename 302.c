#include <stdio.h>
#include <math.h>
//using namespace std;

int main()
{
    int a, b, c, max = 0, i;



    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
        if(a >= max)
            {
                max = a; i = 1;
            }
        if(b >= max)
            {
                max = b; i = 2;
            }
        if(c >= max)
            {
                max = c; i = 3;
            }

    if(i == 1)
    {
        i = c;
        c = a;
        a = i;
    }
    if(i == 2)
    {
        i = c;
        c = b;
        b = i;
    }
    if(a+b <= c)
        {
             printf("impossible");
             return 0;
        }
    if(a*a + b*b == c*c)
        {
            printf("right");
            return 0;
        }
    if(a*a + b*b > c*c)
        {
            printf("acute");
            return 0;
        }

    printf("obtuse");
    return 0;
}
