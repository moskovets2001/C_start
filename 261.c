#include <stdio.h>
#include <math.h>
#define  EPS  0000000.1
//using namespace std;

int main()
{
float a, b, c, h, o;
#define  EPS  0000000.1


scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);
scanf("%d", &h);
    o = -b/a;
if((c == a && h == b) || (a == 0 && b != 0)) { printf("NO");
return 0;

}
if(fabs(a) < EPS && fabs(b) < EPS) {printf("INF");
return 0;
}
if (floor(fabs(o - 0.5)) == fabs(o))
{

if(c*o + h != 0)  printf("%d", &o);
else  printf("NO");
}
else printf("NO");
return 0;
}
