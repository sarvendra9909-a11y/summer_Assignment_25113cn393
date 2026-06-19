// WAP TO FIND STRING LENGTH WITHOUT STRLEN().
#include <stdio.h>
#include <strings.h>
int main()
{
    char str[40];
    puts("Enter a string :");
    gets(str);
    int length=0 , i=0 ;
    while (str[i]!='\0')
    {
        length++;
        i++;
    }
    puts("\nLength of string is :  ");
    printf("%d",length);
    return 0;
}