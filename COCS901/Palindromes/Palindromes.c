#include <stdio.h>
#include <string.h>
#include <stdbool.h>
 
bool isPalindrome(const char s[], const size_t length)
{
    int i,c=0,n;
    n=strlen(s);
	for(i=0;i<n/2;i++)  
    {
    	if(s[i]==s[n-i-1])
    	c++;
 
 	}
 	if(c==i)
        return true;
    else
        return false;
}

void remove_spaces(char* s) 
{
     for (int i = 0, j; s[i] != '\0'; ++i)  
     {
      while (!(s[i] >= 'a' && s[i] <= 'z') && !(s[i] >= 'A' && s[i] <= 'Z') && !(s[i] == '\0')) {
         for (j = i; s[j] != '\0'; ++j) 
         {
            s[j] = s[j + 1];
         }
         s[j] = '\0';
      }
    }

    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }
}

int main()
{
 
    char s[1000];  
    const size_t length;
    printf("Enter  the string: ");
    gets(s);
    
    remove_spaces(s);

    if(isPalindrome(s,length))
    {
 	    printf("String is palindrome\n");
    }
    else{
        printf("String is not palindrome\n");
    }
    system("pause");
}