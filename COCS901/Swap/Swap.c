#include <stdio.h>

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    printf("\nSwapped values: %d , %d", x , y);
}

int main()
{
    int x , y;
    printf("Enter two numbers:");
    scanf("%d %d", &x , &y);
    printf("Original values: %d , %d" , x , y);
    swap(x,y);
    printf("\n");
    system("pause");
}