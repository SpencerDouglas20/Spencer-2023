#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int fill(int arr[],int count, int dice)
{
    int upper = dice * 6;
    upper = upper - dice;

    for(int i = 0; i < count; i++)
    {
        arr[i] = rand() % upper;
        arr[i]+=dice;
    }
}

int sortandcount(int scores[], int count)
{
    int i , j , a;
    for (i = 0; i < count; i++){
      for (j = i + 1; j < count; j++){
         if (scores[i] > scores[j]){
            a = scores[i];
            scores[i] = scores[j];
            scores[j] = a;
         }
      }
    }

}

void printHistogram(int arr[], int count, int dice) 
{
    printf("Histogram:\n===========================\n");
    int num, upper = dice*6;
    float freq , precent;
    for(num = dice; num<=upper; num++)
    {
      printf("%2d --  ",num);
        for(int i = 0; i < count; i++)
        {
          if(arr[i] == num)
          {
            freq++;
          }
        }
      precent = (freq / count)*100;
      printf("%.0f (%5.2f%%):" ,freq, precent);
        for(int j = 0; j < count; j++)
        {
          if(arr[j] == num)
          {
            printf("*");
          }
        }
      printf("\n");
      freq = 0;
      precent = 0;
    }
    printf("===========================\n");
    double sum = 0;
    double mean , SD;
    for(int k = 0; k<count;k++)
    {
        sum = arr[k] + sum;
    }
    mean = sum/count;
    printf("Mean: %.2f\n", mean);
    for (int i = 0; i < count; i++) {
        SD += pow(arr[i] - mean, 2);
    }
    SD = sqrt(SD/count);
    printf("Standard Deviation: %.2f\n", SD);
}

int main()
{
    int ptr;
    srand(time(0));
    int count, dice;
    printf("Enter the number of rolls : ");
    scanf("%d" , &count);
    printf("Enter the number of dice : ");
    scanf("%d" , &dice);
    int arr[count];
    fill(arr,count,dice);
    sortandcount(arr,count);
    printHistogram(arr,count,dice);
    system("pause");
}