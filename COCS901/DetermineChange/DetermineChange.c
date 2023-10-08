#include <stdio.h>
#include <math.h>

void calculateChange(const float paid, const float cost)
{
    int dollars,quaters,dimes,nickels,pennies;
    double remainder;

    if(paid < cost)
    {
        printf("Money is still owed...");
    }
    else if(paid < 0 || cost < 0)
    {
        printf("error...");
    }
    else{
    double change = paid - cost;
    dollars =  change / 1;
    remainder = fmod(change,1);
    quaters = remainder / .25;
    remainder = fmod(remainder,.25);
    dimes = remainder / .10;
    remainder = fmod(remainder,.1);
    nickels = remainder / .5;
    remainder = fmod(remainder,.5);
    pennies = remainder /.01;
    printf("You are owed %d dollars, %d quaters, %d dimes, %d nickels, and %d pennies.",dollars,quaters,dimes,nickels,pennies);
    }

}


int main()
{
    float cost, paid;
    printf("Enter the cost:");
    scanf("%f", &cost);
    printf("Enter the amount paid:");
    scanf("%f" , &paid);
    calculateChange(paid,cost);
    printf("\n");
    system("pause");
}