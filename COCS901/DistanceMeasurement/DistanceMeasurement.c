#include <stdio.h>
#include <math.h>

struct Distance
{
    float x;
    float y;
} dist1, dist2, sum;

int main()
{
    printf("1st x value: ");
    scanf("%f", &dist1.x);
    printf("1st y value: ");
    scanf("%f", &dist1.y);
    printf("2nd x value: ");
    scanf("%f", &dist2.x);
    printf("2nd y value: ");
    scanf("%f", &dist2.y);

    sum.x = dist2.x - dist1.x;
    sum.x = sum.x * sum.x;
    sum.y = dist2.y - dist1.y;
    sum.y = sum.y * sum.y;

    printf("Distances between = %f" , sqrt(sum.x + sum.y));
}