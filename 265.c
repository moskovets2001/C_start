#include <stdio.h>
#include <math.h>
#define  EPS  0000000.1
//using namespace std;

int main()
{
    int k, m, n, stor;



    scanf("%d", &k);
    scanf("%d", &m);
    scanf("%d", &n);
    if(k >= n)
        {
            printf("%d", 2*m);
            return 0;
        }
    stor = 2*n;
    if(stor % k == 0)
        printf("%d", (stor/k)*m);
    else
        printf("%d", ((stor/k)+1)*m);
    return 0;
}
