#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int comparator (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int scoresFill(unsigned short scores[],const unsigned short count)
{
    for(int i=0; i<count; i++)
    {
        scores[i] = rand() % 101;
    }
}

void printArray(const unsigned short scores[], const unsigned short count){
    printf("Initail scores before sorting : ");
    for (int i = 0; i < count; i++)
    {
 	printf("%d ", scores[i]);
    }     
}

void sort(unsigned short scores[], const unsigned short count)
{
    int i , j , a;
    printf("\nScores after sorting : ");
    for (i = 0; i < count; ++i){
      for (j = i + 1; j < count; ++j){
         if (scores[i] > scores[j]){
            a = scores[i];
            scores[i] = scores[j];
            scores[j] = a;
         }
      }
    }
     for (i = 0; i < count; i++)
    {
 	printf("%d ", scores[i]);
    }     
}

void getStats(const unsigned short scores[], const unsigned short count, unsigned short * const min, unsigned short * const max, float * const mean, float * const median)
{
    float total;
    int tempmin = scores[0];
    int tempmax = scores[49];
    for(int i = 0; i < count; i++)
    {
        total = total + (scores[i]);
    }
    float tempmean = (total / count);
    float temp = (scores[24] + scores[25]);
    float tempmedian = (temp / 2);

    printf("\nThe lowest score was : %hu" , tempmin);
    printf("\nThe highest score was : %hu" , tempmax);
    printf("\nThe mean of the scores was : %.1hf" , tempmean);
    printf("\nThe median of the scores was : %.1hf" , tempmedian);
}

float standardDeviation(const unsigned short scores[], const float mean, const unsigned short count)
{
    float sum = 0.0, tempmean, SD = 0.0;
    int i;
    for (i = 0; i < count; ++i) {
        sum += scores[i];
    }
    tempmean = sum / count;
    for (i = 0; i < count; ++i) {
        SD += pow(scores[i] - tempmean, 2);
    }
    return sqrt(SD / count);
}


int main()
{
    srand(time(0));
    unsigned short scores[50] , count = 50;
    unsigned short * const min;
    unsigned short * const max;
    float * const mean;
    const float meann;
    float * const median;
    scoresFill(scores,count);
    printArray(scores,count);
    sort(scores,count);
    getStats(scores,count,min,max,mean,median);
    printf("\nThe standard deviation was : %.1f" , standardDeviation(scores,meann,count));
    printf("\n");
    system("pause");
}