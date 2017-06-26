#include <stdio.h>
#include <math.h>
//using namespace std;

int main()
{
int a, b, c, d, i, i1;



scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);

d = b*b - 4*c;
i = (b - 2*b + sqrt(d)/2);
i1 = (b - 2*b - sqrt(d)/2);
printf("%d\n", &i);
printf("%d\n", &i1);
return 0;
}
