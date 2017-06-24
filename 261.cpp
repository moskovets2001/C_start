#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
int a, b, c, d;



cin >> a >> b >> c >> d;
if((c == a && d == b) || (a == 0 && b != 0)) { cout << "NO";
return 0;

}
if(a == 0 && b == 0) {cout << "INF";
return 0;
}
if (floor((abs((b - 2*b)/a) - 0.5)) == abs((b - 2*b)/a))
{
if(c*(b - 2*b)/a + d != 0) cout << (b - 2*b)/a;
else cout << "NO";
}
else cout << "NO";
return 0;
}
