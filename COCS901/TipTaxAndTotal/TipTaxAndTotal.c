#include <stdio.h>

int main()
{
    float amount, amountTax , amountTip , amountTotal ;
    printf("How much was your purchase? > $");
    scanf("%f" , &amount);
    amountTax = amount * 0.07;
    amountTip = amount * 0.15;
    amountTotal = amount + amountTax + amountTip;
    printf("\n\n\nPurchase Amount > \t$%.2f" , amount);
    printf("\n15%% Tip Amount > \t$%.2f" , amountTip);
    printf("\nTax Amount > \t\t$%.2f" , amountTax);
    printf("\nTotal Purchase > \t$%.2f" , amountTotal);
    printf("\n");
    system("pause");
}