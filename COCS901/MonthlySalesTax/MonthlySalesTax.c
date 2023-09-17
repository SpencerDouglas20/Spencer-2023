#include <stdio.h>

int main()
{
    int Year;
    float StateTax , CountyTax , TotalCollected , CountyCollected , StateCollected , SalesPreTax , TotalSaleTax; 
    char Month[20];
    printf("What Month is being reported? > ");
    scanf("%s" , &Month);
    printf("What year is being reported? > ");
    scanf("%d" , &Year);
    printf("How much money was collected during the month of ");
    printf("%s" , Month);
    printf("? (including tax) > $");
    scanf("%f" , &TotalCollected);
    printf("What is your state tax? > ");
    scanf("%f" , &StateTax);
    printf("What is your county tax? > ");
    scanf("%f" , &CountyTax);
    system("cls");

    if(StateTax > 1){
        StateTax = StateTax / 100;
    }
    else{
        StateTax = StateTax;
    }
    if (CountyTax > 1){
        CountyTax = CountyTax / 100;
    }  
    else{
        CountyTax = CountyTax;
    }
    CountyCollected = TotalCollected * CountyTax;
    StateCollected = TotalCollected * StateTax;
    SalesPreTax = TotalCollected - (StateCollected + CountyCollected);
    TotalSaleTax = StateCollected + CountyCollected;
     
    printf("Month: "); 
    printf("%s" , Month); 
    printf(" "); 
    printf("%d" , Year); 
    printf("\n");
    printf("-----------------------------------");
    printf("\nTotal Collected >\t$ "); 
    printf("%.2f" , TotalCollected); 
    printf("\n");
    printf("Sales >\t\t\t$ "); 
    printf("%.2f" , SalesPreTax);
    printf("\n");
    printf("County Sales Tax >\t$   ");
    printf("%.2f" , CountyCollected); 
    printf("\n");
    printf("State Sales Tax >\t$   "); 
    printf("%.2f" , StateCollected); 
    printf("\n");
    printf("Total Sales Tax >\t$  "); 
    printf("%.2f" , TotalSaleTax);
    printf("\n-----------------------------------\n");
    system("pause");
}