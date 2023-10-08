#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d" , &x);
    printf("value %d located at %p", x, &x);
    printf("\n");
    system("pause");
}