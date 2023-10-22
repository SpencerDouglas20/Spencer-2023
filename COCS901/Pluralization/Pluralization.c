#include <stdio.h>
#include <string.h>

void pluralize (char word[])
{
    int length , i;
    char noun;
    for(i = 0; word[i] != '\0'; i++);
    length = i;


    if (word[length - 1] == 'y') 
    {   
        word[length - 1] = 'i';
        word[length] = 'e';
        word[length + 1] = 's';
        word[length + 2] = '\0';  
    }
    else if (word[length - 1] == 'x' ||word[length - 1] == 's' ||(word[length - 2] == 'c' && word[length - 1] == 'h') ||(word[length - 2] == 's' && word[length - 1] == 'h'))
    { 
        strcat(word, "es");
    }
    else
    {   
    strcat(word, "s");
    } 
    return;
}

int main (void)
{ 
    char noun[20];  
    printf("Enter a noun in singular form: ");
    scanf("%s", noun);
    pluralize(noun);
    printf("The plural form is %s\n", noun);
    
    system("pause");
}

