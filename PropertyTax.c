#include <stdio.h> 

int main()
{
float PropertyValue , AssessmentValue , TaxAmount;
printf("Enter the property value in dollars > $");
scanf("%f" , &PropertyValue);
AssessmentValue = PropertyValue * 0.6;
TaxAmount = AssessmentValue * 0.0075;
system("cls");
printf("  Property Value > $ %.2f" , PropertyValue);
printf("\nAssessment Value > $ %.2f" , AssessmentValue);
printf("\n      Tax Amount > $   %.2f", TaxAmount);
printf("\n");
system("pause");
}