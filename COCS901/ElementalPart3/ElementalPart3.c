#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char c;
    FILE *fp = fopen("elements.txt","r");
    if (fp == NULL) 
    { 
        printf("Cannot open file \n"); 
        exit(0); 
    } 
  
    c = fgetc(fp); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fp); 
    } 
  
    fclose(fp); 
    return 0; 
}