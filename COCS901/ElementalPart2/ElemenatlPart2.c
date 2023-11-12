#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

struct element_t
{
    int elementNum;
    char elementName[50];
    char elementAbrv[2];
    char elementClass[50];
    float atomicWeight;
    int electron[7];
};


int main()
{
    struct element_t elements[10];
    FILE *fptr = fopen("elements.txt","w");
    FILE *fp = fopen("elements.bin","wb");

    for(int i = 0;i<2;i++)
    {
        printf("Enter the Atomic number: ");
        scanf("%d", &elements[i].elementNum);

        printf("Enter the Element name: ");
        scanf("%s" , &elements[i].elementName);

        printf("Enter the Element abrivation: ");
        scanf("%s", &elements[i].elementAbrv);

        printf("Enter the Element class: ");
        scanf("%s", &elements[i].elementClass);

        printf("Enter the Atomic weight: ");
        scanf("%f" , &elements[i].atomicWeight);

        printf("Enter the electrons in each shell (press enter after each number): ");
        for (int f = 0; f < 7; f++) {
            scanf("%d", &elements[i].electron[f]);
        }
    }
    
    for(int i=0; i<2; i++)
    {
        fprintf(fptr,"%d\n",elements[i].elementNum);
        fprintf(fptr,"%s\n",elements[i].elementName);
        fprintf(fptr,"%s\n",elements[i].elementAbrv);
        fprintf(fptr,"%s\n",elements[i].elementClass);
        fprintf(fptr,"%f\n",elements[i].atomicWeight);
        for (int f = 0; f < 7; f++) {
        fprintf(fptr,"%d ", elements[i].electron[f]);
        }
    }

    fwrite(elements,sizeof(elements),1,fp);

    fclose(fptr);
    fclose(fp);
}