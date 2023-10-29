#include <stdio.h>
#include <stdlib.h>

unsigned long long int fib(int num)
{
     if (num <= 1)
        return num;
    return fib(num - 1) + fib(num - 2);
}

int main()
{
    int element;
    printf("Which element of the fibonacci sequence do you want?");
    printf("\n(Enter 0 to exit): ");
    scanf("%d",&element);
    if(element == 0)
    {
        exit(0);
    }
    else if(element<0 || element>50)
    {
        printf("Validation error...");
        exit(0);
    }
    else if(element == 1)
    {
        printf("fibonacci(1) = 0");
    }
    else if(element == 2)
    {
        printf("fibonacci(2) = 1");
    }
    else{
    printf("fibonacci(%d) = %llu", element , fib(element-1));
    }
}