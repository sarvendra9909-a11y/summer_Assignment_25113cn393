// WAP TO FIND FIRST REPEATING CHARACTER.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[40] , ch ;
    printf("Enter a string : ");
    gets(str);
    int i=0 , j , count=0 ;
    while (str[i]!='\0')
    { 
        j = i+1;
        while (str[j]!='\0')
        {
             if( str[i]==str[j]){
               ch = str[i];
               count = 1;
               break;
        }
        j++;
        }
        if( count==1) {
            break;
        }
        i++;
    }
    if( count == 1)  printf("\nFirst repeating character is %c .",ch);
    else printf("NO Repeating character.");
    return 0;
}