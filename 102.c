#include <stdio.h>

int IsDigit(char a);
int main()
{
    char a;
    scanf("%c", &a);
    if(IsDigit(a))
        printf("yes");
    else
        printf("no");
    return 0;
}
int IsDigit(char a)
{
    if(47 < a && a < 58)
        return 1;
    else
        return 0;


}
