#include <stdio.h>


int main()
{
    int a = 0, b = 0, c = 0, n, d = 0;



    scanf("%d", &n);
a = n/60;
b = n%60;
if(b >= 35) a++;
else
    {
      c = b/10;
      if(b%10 == 9)  c++;
      else
        {
         d = b%10;
        }

    }

printf("%d %d %d", d, c, a);
   return 0;
}
