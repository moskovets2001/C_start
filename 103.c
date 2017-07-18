#include <stdio.h>

unsigned char ToUpper(unsigned char c);

int main()
{
    char a;
    scanf("%c", &a);

    printf("%c", ToUpper(a));
    return 0;
}
unsigned char ToUpper(unsigned char c)
{
    if(c >= 'a' && c <= 'z')
        return c - ('a' - 'A');
    else
        return c;
}
