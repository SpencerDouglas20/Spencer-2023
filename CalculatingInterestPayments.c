#include <stdio.h>
#include <math.h>

float calculatePayments(float APR , float Loan  , int Payments)
{
    float MonthlyPayments , AmountPayed , InterestPayed , i;

     if(APR < 1){
        APR = APR * 100;
    }
    else{
        APR = APR;
    }

    printf("Loan Amount > \t\t\t $ %11.2f" , Loan);
    printf("\nAnnual Interest Rate (%%) > \t %13.2f" , APR);
    printf("\nNumber of Paymets > \t\t%14d" , Payments);

     if(APR > 1){
        APR = APR / 100;
    }
    else{
        APR = APR;
    }

    i = APR/12;
    MonthlyPayments = (i*Loan);
    i = i + 1;
    i = pow(i,(Payments * -1));
    MonthlyPayments = MonthlyPayments / (1-i);
    printf("\nMonthly Payments > \t\t $ %11.2f" , MonthlyPayments);
    AmountPayed = MonthlyPayments * Payments;
    printf("\nAmount Payed Back > \t\t $ %11.2f" , AmountPayed);
    InterestPayed = AmountPayed - Loan;
    printf("\nInterest Paid > \t\t $ %11.2f" , InterestPayed);
    printf("\n");
}


int main()
{
    int Payments;
    float Loan , APR;
    printf("Enter the principal (USD) > ");
    scanf("%f" , &Loan);
    printf("Enter the # of monthly payments > ");
    scanf("%d" , &Payments);
    printf("Enter the APR (%%) > ");
    scanf("%f" , &APR);

    system("cls");

    calculatePayments(APR , Loan , Payments);
    system("pause");
}