#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comparator (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int attributePoints()
{
    int x[4];
    int randnum , points;
    points = 0;
    for(int i = 0; i<4; i++)
    {
        randnum = rand() % 5;
        randnum++;
        x[i]=randnum;
    }

    qsort(x, 4, sizeof(int), comparator );
    for(int i = 1 ; i < 4; i++ ) {   
      points = points + (x[i]);
    }
    return points;
}

int main()
{
    srand(time(0));

    int attributes[6];
    for(int i=0; i<6; i++)
    {
        attributes[i]=attributePoints();
    }

    for(int i=0; i<6; i++)
    {
        printf("Attribute #%d:\t%d", i+1,attributes[i]);
        printf("\n");
    }

    system("pause");
}
