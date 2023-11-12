#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char readFileData[32]={0};
    FILE * fp = fopen("elements.txt", "r");

     if(fp == NULL)
    {
        printf("Error in opening the file\n");
        exit(1);
    }

    fscanf(fp,"%s",readFileData);
    puts(readFileData);
    fclose(fp);
    return 0;
}