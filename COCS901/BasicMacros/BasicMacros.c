#define MAX(x, y) (x > y ? x : y)
#define MIN(x, y) (x < y ? x : y)
#define IS_ODD(x) (x & 1)

#include <stdio.h>

int main()
{
    int v1 , v2;

    while(v1 != -1 || v2 != -1){
        printf("\nEnter two numbers(-1 will exit): ");
        scanf("%d",&v1);

        if(v1 == -1){
            break;
        }

        scanf("%d",&v2);

          if(v2 == -1){
            break;
        }

        printf("\nThe max value is %d" , MAX(v1,v2));
        printf("\nThe minimum value is %d" , MIN(v1,v2));
        
        if(IS_ODD(v1) == 1){
            printf("\n%d is an odd number." , v1);
        }
        else{
            printf("\n%d is an even number." , v1);
        }

         if(IS_ODD(v2) == 1){
            printf("\n%d is an odd number." , v2);
        }
        else{
            printf("\n%d is an even number." , v2);
        }
    }
    
}
