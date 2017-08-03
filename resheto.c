#include <stdio.h>
#include <math.h>

void resheto(int a[], int n);


int main()
{
    int a[10000], n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) a[i] = 1;
    printf("%d", a[997]);
    return 0;
}
void resheto(int a[], int n)
{
    int j, k, i;
    j = 2;
    i = 2;
    while(j < sqrt(n))
    {
        while(i < n)
        {
            i = j + i;
            a[i] = 0;
        }
        n = j;
        i = 2;
        while(j == n)
            if(a[i] == 1 && i > j)
                j = i;
            else
                i++;
    }

}
