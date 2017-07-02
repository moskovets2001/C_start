#include <stdio.h>


int main()
{
    int x;
    scanf("%d", &x);
    if (x == 100)
    {
        printf("C");
        x = x - 100;
    }
    if (x / 10 == 9)
    {
        printf("XC");
        x = x - 90;
    }


    while (x >= 50)
    {
        printf("L");
        x = x - 50;
    }
    if (x / 10 == 4)
    {
        printf("XL");
        x = x - 40;
    }

    while (x >= 10)
    {
        printf("X");
        x = x - 10;
    }

    if (x % 10 == 6)
    {
        printf("VI");
        x = x - 6;
    }
    if (x % 10 == 9)
    {
        printf("IX");
        x = x - 9;
    }
    while (x >= 5)
    {
        printf("V");
        x = x - 5;
    }
    if (x % 10 == 4)
    {
        printf("IV");
        x = x - 4;
    }
    while (x >= 1)
    {
        printf("I");
        x--;
    }

    return 0;
}
