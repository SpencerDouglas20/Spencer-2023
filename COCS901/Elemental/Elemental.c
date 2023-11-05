#include  <stdio.h>
#include <conio.h>

struct element_t
{
    int elementNum;
    char elementName[50];
    char elementAbrv[2];
    char elementClass[50];
    float atomicWeight;
    int electron[7];
}element1;

void print_element(struct element_t const element1)
{
    system("cls");
    printf("%d  ", element1.elementNum);
    printf("%s  " , element1.elementName);
    printf("%.*s  ", 2 , element1.elementAbrv);
    printf("%s  ", element1.elementClass);
    printf("%.4f  " , element1.atomicWeight);
     for (int i = 0; i < 7; i++) {
        printf("%d ", element1.electron[i]);
    }
}

void scan_element(struct element_t const element1)
{
    printf("Enter the Atomic number: ");
    scanf("%d", &element1.elementNum);

    printf("Enter the Element name: ");
    scanf("%s" , &element1.elementName);

    printf("Enter the Element abrivation: ");
    scanf("%s", &element1.elementAbrv);

    printf("Enter the Element class: ");
    scanf("%s", &element1.elementClass);

    printf("Enter the Atomic weight: ");
    scanf("%f" , &element1.atomicWeight);

    printf("Enter the electrons in each shell (press enter after each number): ");
    for (int i = 0; i < 7; i++) {
        scanf("%d", &element1.electron[i]);
    }
    print_element(element1);
}

int main()
{
    scan_element(element1);
}