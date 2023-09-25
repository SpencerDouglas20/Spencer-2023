#include <stdio.h>

float calculateBMI(const unsigned short wt_lb , const unsigned short ht_in)
{
    float wt , ht , BMI;
    wt = wt_lb * 703;
    ht = ht_in * ht_in;
    BMI = wt/ht;
    return BMI;
}

void reportBMIStatus(float BMI)
{
    if(BMI<18.5)
    {
        printf("Underweight");
    }
    if(BMI>=18.5&&BMI<=24.9)
    {
        printf("Normal");
    }
    if(BMI>=25.0&&BMI<=29.9)
    {
        printf("Overweight");
    }
    if(BMI>30)
    {
        printf("Obese");
    }
}

int main()
{
    const unsigned short weight , height;
    printf("Enter your weight in pounds: ");
    scanf("%hu",&weight);
    printf("Enter your height in inches: ");
    scanf("%hu",&height);

    float BMI = calculateBMI(weight,height);

    reportBMIStatus(BMI);
    printf("\n");
    system("pause");
}