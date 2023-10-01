#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 

void guess(int N)
{
    int number, guess, numberofguess = 1;
    srand(time(NULL));
    number = rand() % N;
 
    printf("Guess a number between 1 and %d\n", N);
 
    do {
        printf("Enter your guess:");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Too high\n");
            numberofguess++;
        }
        else if (number > guess)
         {
            printf("Too low\n");
            numberofguess++;
        }
 
        else
            printf("It took you %d guesses for the correct answer (%d)\n" , numberofguess, number);
 
    } while (guess != number);
    
    system("pause");
}
 
int main()
{
    int N = 100;
    guess(N);
}