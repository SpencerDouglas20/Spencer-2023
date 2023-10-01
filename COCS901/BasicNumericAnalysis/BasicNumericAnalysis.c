#include <stdio.h>
#include <math.h>

int sum(int arr[], int n)
{
    int sum = 0; 
    
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
 
    return sum;
    
}

int main()
{
    int elements , arrcount , small , large;
    printf("Enter the number of elements:");
    scanf("%d" , &elements);
    int arr[elements];
   for(int n = 0; n<elements; n++){
        printf("Enter the next number:");
        scanf("%d" , &arr[n]);
    }

    float sumP = sum(arr,elements);
    float averageP = sumP / elements;

    printf("\nThe sum is:%13.0f", sumP);
    printf("\nThe average is:%9.2f", averageP);

    small= arr[0];
    for(int i=1; i<elements; i++)
    {
    if(small > arr[i])
     {
       small = arr[i];
	 }   
    }
    printf("\nSmallest:%15d",small);

    large = arr[0];
    for(int i=1; i<elements; i++)
    {
    if(large < arr[i])
     {
       large = arr[i];
	 }   
    }
    printf("\nLargest:%16d",large);

 
}