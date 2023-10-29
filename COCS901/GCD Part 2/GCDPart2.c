#include <stdio.h>
#include <math.h>

int gcd(int x, int y)
{
    if (y != 0)
    {
        return gcd(y, x % y);
    }
    else
    {
        return x;
    }
}

int main()
{
    int a , b, x , y;
    printf("Enter your first number:");
    scanf("%d" , &a);
    printf("Enter your second number:");
    scanf("%d" , &b);
    x = abs(a);
    y = abs(b);
    printf("G.C.D of %d and %d is %d.", a, b, gcd(x, y));
    printf("\n");
    system("pause");
}