#include <stdio.h>

int main()
{
    FILE *read = fopen("elements.txt","r");
    
    fprintf(read,"%d\n");
    
}