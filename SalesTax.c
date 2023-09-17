#include <stdio.h>

int main()
{
    float purchase,county,state,totalTax;
    county = 0.02 ; 
    state = 0.04 ; 
    printf("How much was your purchase? > $") ; 
    scanf("%f" , &purchase) ;
    totalTax = purchase * (state + county) ;
    printf ("\n\n\nPurchase Amount > \t$%.2f" , purchase) ;
    printf("\nState Tax > \t\t4%%") ;
    printf("\nCounty Tax > \t\t2%%") ;
    printf("\nTotal Tax > \t\t6%%") ;
    printf("\nTotal Amount > \t\t$%.2f" , (purchase + totalTax)) ;
    printf("\n");
    system("pause");
} 