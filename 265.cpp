#include <iostream>
#include <math.h>
#define  EPS  0000000.1
using namespace std;

int main()
{
int k, m, n, stor, kolvo;



cin >> k >> m >> n;

if(k == n){cout << 2*m; return 0;}
stor = 2*n;
if(stor % k == 0) cout << (stor/k)*m;
else cout << ((stor/k)+1)*m;

return 0;
}
