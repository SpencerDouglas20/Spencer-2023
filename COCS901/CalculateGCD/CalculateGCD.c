#include <stdio.h>

int gcd(int x, int y)
{
    x = ( x > 0) ? x : -x;
    y = ( y > 0) ? y : -y;
    while(x!=y)
    {
        if(x > y)
            x -= y;
        else
            y -= x;
    }
    printf("GCD = %d",x);
}

int main()
{
    int a , b;
    printf("Enter your first number:");
    scanf("%d" , &a);
    printf("Enter your second number:");
    scanf("%d" , &b);

    gcd(a,b);
    printf("\n");
    system("pause");
}