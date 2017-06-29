#include <stdio.h>
#include <math.h>
#define  EPS  0000000.1
//using namespace std;

int main()
{
double a, b, c, d, i, i1;



scanf("%lf", &a);
scanf("%lf", &b);
scanf("%lfr", &c);

d = b*b - 4*c*a;
if(fabs(d) < EPS)
{
    printf("%lf", (-b/(2*a)));
    return 0;
}
if(d < 0)
{
 return 0;
}


i = ((-b + sqrt(d))/(2*a));
i1 = ((-b - sqrt(d))/(2*a));
printf("%lf\n", i);
printf("%lf", i1);
return 0;
}
