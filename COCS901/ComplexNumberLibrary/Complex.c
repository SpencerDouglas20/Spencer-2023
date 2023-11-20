/*
*   complex.c
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_LINE 2048


struct Complex{
    double real, imag;
}p , q , Complex;

void getComplex(FILE* fp){
    fp = fopen("Complex.txt", "r");
    srand(time(NULL));
    int rand1 = rand() % 35 + 1;
    int rand2 = rand() % 35 + 1;
    double nums[35];
    int i = 0;

    if (rand1 == rand2)
    {
        rand2++;
    }

    if(fp == NULL){
        printf("Error opening file.\n");
        exit(1);
    }

    while(i<35)
    {
        fscanf(fp, "%f,", &nums[i]);
        i++;
    }

    p.real = nums[rand1];
    p.imag = nums[rand2];

    rand1 = rand() % 35 + 1;
    rand2 = rand() % 35 + 1;

    if (rand1 == rand2)
    {
        rand2++;
    }

    q.real = nums[rand1];
    q.imag = nums[rand2];

    fclose(fp);

    printf("First complex number: %.1f + %.1fI\n", p.real , p.imag);
    printf("Second complex number: %.1f + %.1fI\n", q.real , q.imag);
}

void writeComplex(double p, double q, FILE* fp){
    fp = fopen("Complex.txt", "r+");
    char p1[3];
    char p2[3];

    snprintf(p1, 3, "%f", p);
    snprintf(p2, 3, "%f", q);

    fprintf(fp,p1);
    fprintf(fp,p2);
    fclose(fp);
}

void Add(double p , double q , double p2, double q2){
    double localReal , localImag;

    localReal = p + p2;
    localImag = q + q2;

    printf("Complex numbers added: %.1f + %.1fI\n",localReal,localImag);
}

void Copy(double p, double q){
    Complex.real = p;
    Complex.imag = q;
    printf("Second complex number: %.1f + %.1fI\n", p , q);
    printf("Second complex number copied: %.1f + %.1fI\n", Complex.real , Complex.imag);
}

void runComplex(FILE* fp)
{
    getComplex(fp);
    writeComplex(p.real, p.imag, fp);
    writeComplex(q.real, q.imag, fp);
    Add(p.real , p.imag , q.real , q.imag);
    Copy(q.real , q.imag);
}