// WAP TO CONVERT LOWERCASE TO UPPERCASE.
#include <stdio.h>
#include <string.h>
int main()
{  
    char str[50] ;
    int i=0;
    puts("Enter a string in lowercase .") ;
    gets(str);
    while (str[i]!='\0')
    {
        if(str[i]>='a' &&   str[i]<='z'){
            str[i] = str[i] - 32;
        }
        i++;
    }
    printf("String in Uppercase : %s",str);
    return 0;
}