#include <iostream>
#include <math.h>
#define  EPS  00000.1
using namespace std;

int main()
{
double a, b, c, d, i, i1;



cin >> a >> b >> c;

d = b*b - 4*c*a;
if(d < 0)
{
 return 0;
}

if(d < EPS)
{
    cout << (b-2*b)/2*a;
    return 0;
}
i = ((b - 2*b + sqrt(d))/(2*a));
i1 = ((b - 2*b - sqrt(d))/(2*a));
cout << i << endl << i1;
return 0;
}
