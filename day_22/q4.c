// WAP TO REMOVE SPACES FROM STRING.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[40];
    printf("Enter a string : ");
    gets(str);
    int i=0;
    while (str[i]!='\0')
    {
        if( str[i]==' '){
            str[i] = str[i+1];
        }
        i++;
    }
    puts(str);
    return 0;
}