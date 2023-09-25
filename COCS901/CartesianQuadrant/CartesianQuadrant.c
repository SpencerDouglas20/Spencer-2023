#include <stdio.h>

float findQuadrant(float xCord , float yCord)
{
    if(xCord==0&&yCord==0)
    {
        printf("You are on the orgin.");
    }
    if(xCord>0&&yCord>0)
    {
        printf("You are in quadrant 1");
    }
    if(xCord<0&&yCord>0)
    {
        printf("You are in quadrant 2");
    }
    if(xCord<0&&yCord<0)
    {
        printf("You are in quadrant 3");
    }
    if(xCord>0&&yCord<0)
    {
        printf("You are in quadrant 4");
    }
    if(xCord==0&&yCord!=0)
    {
        printf("You are on the X axis");
    }
    if(yCord==0&&xCord!=0)
    {
        printf("You are on the Y axis");
    }
}

int main()
{
    float xCord , yCord;
    printf("Enter your X coordinate: ");
    scanf("%f",&xCord);
    printf("Enter your Y coordinate: ");
    scanf("%f",&yCord);

    findQuadrant(xCord,yCord);
    printf("\n");
    system("pause");
}