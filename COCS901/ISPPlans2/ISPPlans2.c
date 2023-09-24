#include <stdio.h>
#include <stdbool.h>

float calculatePkgA(unsigned short hours)
{
    float cost , OverTime;
    if(hours < 51)
    {
        cost = 15;
    }
    else
    {
        OverTime = hours - 50;
        cost = OverTime * 2;
        cost = cost + 15;
    }

    printf("Under plan A your cost is: $%.2f" , cost);
    printf("\n");
}

float calculatePkgB(unsigned short hours)
{
    float cost , OverTime;
    if(hours < 101)
    {
        cost = 20;
    }
    else
    {
        OverTime = hours - 100;
        cost = OverTime * 1.50;
        cost = cost + 20;
    }

    printf("Under plan B your cost is: $%.2f" , cost);
    printf("\n");
}

float calculatePkgC(unsigned short hours)
{
    float cost , OverTime;
    if(hours < 151)
    {
        cost = 25;
    }
    else
    {
        OverTime = hours - 150;
        cost = OverTime * 1;
        cost = cost + 25;
    }

    printf("Under plan C your cost is: $%.2f" , cost);
    printf("\n");
}

char getPlan()
{
    char plan;
    printf("Enter your current plan (a, b, or c): ");
    scanf("%c", &plan);
    return plan;
}

bool isPlanValid(char plan)
{
   if(plan != 'a' || 'b' || 'c')
   {
    return false;
   }
   else
   {
    return true;
   }
}

bool areHoursValid(unsigned short hours)
{
    if(hours >= 745)
    {
        return false;
    }
    else
    {
        return true;
    }
}



int main()
{
    char plan = getPlan();
    isPlanValid(plan);

}