#include <iostream>
#include <math.h>
#define  EPS  0000000.1
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
if(d == 0)
{

    if(fabs((b-2*b)/2*a) < EPS)  cout << (b-2*b)/2*a;
    return 0;
}
if(fabs(((b - 2*b + sqrt(d))/(2*a))) < EPS); cout << (b - 2*b + sqrt(d))/(2*a) << endl;
if(fabs(((b - 2*b - sqrt(d))/(2*a))) < EPS); cout << (b - 2*b - sqrt(d))/(2*a) << endl;
return 0;
}
