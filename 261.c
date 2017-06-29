#include <stdio.h>
#include <math.h>
//using namespace std;

int main()
{
float a, b, c, h, o;



scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);
scanf("%d", &h);

if((c == a && h == b) || (a == 0 && b != 0)) { printf("NO");
return 0;

}
if(a == 0 && b == 0) {printf("INF");
return 0;
}
if (floor((fabs((b - 2*b)/a) - 0.5)) == fabs((b - 2*b)/a))
{
    o = (b - 2*b)/a;
if(c*(b - 2*b)/a + h != 0)  printf("%d", &o);
else  printf("NO");
}
else printf("NO");
return 0;
}
