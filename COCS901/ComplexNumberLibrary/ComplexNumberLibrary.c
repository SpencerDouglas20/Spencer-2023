#include <stdio.h>
#include "Complex.c"

int main()
{
    FILE* fp = fopen("Complex.txt", "r");
    runComplex(fp);
}
