#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fill(int arr[],int count)
{
    for(int i = 0; i < count; i++)
    {
        arr[i] = rand() % 11;
        arr[i]+= 2;
        
    }
    
}

int sort(int scores[], int count)
{
    int i , j , a;
    for (i = 0; i < count; ++i){
      for (j = i + 1; j < count; ++j){
         if (scores[i] > scores[j]){
            a = scores[i];
            scores[i] = scores[j];
            scores[j] = a;
         }
      }
    }
}

void printHistogram(int arr[], int count) 
{
    int num;
    float freq , precent;
    for(num=2; num<13; num++)
    {
      printf("%2d",num);
        for(int i = 0; i < count; i++)
        {
          if(arr[i] == num)
          {
            freq++;
          }
        }
      precent = (freq / count)*100;
      printf(" (%5.2f%%):" , precent);
        for(int i = 0; i < count; i++)
        {
          if(arr[i] == num)
          {
            printf("*");
          }
        }
      printf("\n");
      freq = 0;
      precent = 0;
    }
}

int main()
{
    srand(time(0));
    int count;
    printf("Enter the number of rolls : ");
    scanf("%d" , &count);
    int arr[count];
    fill(arr,count);
    sort(arr,count);
    printf("Histogram:\n===========================\n");
    printHistogram(arr,count);
    system("pause");
}