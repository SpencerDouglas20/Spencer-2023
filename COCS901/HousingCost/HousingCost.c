#include <stdio.h>

calculateHousingCosts(float HomeCost , float TaxRate , float FuelCost)
{
    float Cost , Tax , fuel;
    
    if(TaxRate > 1)
    {
        TaxRate = TaxRate / 100;
    }
    else
    {
        TaxRate = TaxRate;
    
    }
    Tax = HomeCost * TaxRate;
    Tax = Tax * 5;
    fuel = FuelCost * 5;
    Cost = HomeCost + Tax + fuel;

    printf("Your initial cost of ownership is $%.2f" , Cost);
}

int main()
{
    float HomeCost , TaxRate , FuelCost;

    printf("Enter home cost (USD):");
    scanf("%f" , &HomeCost);
    printf("Enter the tax rate(%%):");
    scanf("%f" , &TaxRate);
    printf("Enter annual fuel cost (USD):");
    scanf("%f" , &FuelCost);
    printf("=======================\n");

    calculateHousingCosts(HomeCost , TaxRate , FuelCost);
    printf("\n");
    system("pause");
}