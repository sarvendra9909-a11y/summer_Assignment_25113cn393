// WAP TO CHARACTER FREQUENCY.
#include <stdio.h>
#include <string.h>
int main()
{
    char ch , str[40];
    printf("Enter a string : ");
    gets(str);
    printf("Enter a character.\n");
   scanf("%c",&ch);
    int i=0 , count = 0;
    while (str[i]!='\0')
    {
        if( str[i]==ch){
            count++;
        }
        i++;
    }
    printf("Frequency of %c is %d.",ch,count);
    return 0;
}