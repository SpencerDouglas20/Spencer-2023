#include <stdio.h>
#include <string.h>

void convertToUppercase(char *givenStr)
{
    int i;
    for (i = 0; givenStr[i] != '\0'; i++)
    {
        if (givenStr[i] >= 'a' && givenStr[i] <= 'z')
        {
            givenStr[i] = givenStr[i] - 32;
        }
    }
}

int main()
{
    char givenStr[100];
    printf("Enter a string : \n");
    fgets(givenStr, 100, stdin);
    convertToUppercase(givenStr);
    printf(givenStr);
    system("pause");
}
