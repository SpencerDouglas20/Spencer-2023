#include <stdio.h>

int main()
{
    FILE *fptr = fopen("hello.txt","w");
    fprintf(fptr,"hello world!");
    fprintf(stdout,"hello world!");
    fclose(fptr);
}