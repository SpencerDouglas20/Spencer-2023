#include <stdio.h>

int main()
{
    float shares , boughtFor , soldFor, c1 , c2 , totalBuy , totalSale;
    shares = 1000 ;
    boughtFor = 32.87 ; 
    soldFor = 33.92 ; 
    c1 = (shares * boughtFor) * 0.02;
    c2 = (shares * soldFor) * 0.02;
    totalBuy = (shares * boughtFor) + c1;
    totalSale = (shares * soldFor) - c2;
    printf("Amount paid for the stock > \t\t$%.2f" , (shares * boughtFor));
    printf("\nCommission paid on the purchase > \t$%.2f" , c1);
    printf("\nAmount the stock sold for > \t\t$%.2f " , (shares * soldFor));
    printf("\nCommission paid on the sale > \t\t$%.2f" , c2);
    if(totalSale > totalBuy)
    {
        printf("\n\nProfits made > \t\t\t$%.2f" , (totalSale - totalBuy));
    }
    else
    {
        printf("\n\nMoney lost > \t\t\t\t$%.2f" , totalBuy - totalSale);
    }
    printf("\n");
    system("pause");
}