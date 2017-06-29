#include <stdio.h>
#include <math.h>
#define  EPS  0000000.1

int main()
{
int a, b, c, d, k;
float o;


scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);
scanf("%d", &d);
    o = -b/(float)a;
if((c == a && d == b) || (a == 0 && b != 0)) { printf("NO");
return 0;

}
if(a == 0 && b == 0) {printf("INF");
return 0;
}
k = o;
if (fabs(o - k) < EPS)
{

if(c*(int)o + d != 0)  printf("%d",  o);
else  printf("NO");
}
else printf("NO");
return 0;
}
