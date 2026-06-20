// WAP TO CHECK PALINDROME STRING.
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[40] , str2[40];
    puts("Enter a string .");
    gets(str1);
    int len = strlen(str1);
    int i=0 ,  count=0 ;
    while (str1[i]!='\0')
    {
        str2[i] = str1[i];
        i++;
    }
    for( int i=0 , j= (len-1) ; i<j ; i++ , j--){
        char temp = str1[i];
        str1[i]   = str1[j];
        str1[j]   = temp;
    }
    printf("Reverse of string : ");
    puts(str1);
    i=0;
    while (str1[i]!='\0')
    {
       if( str2[i]!=str1[i]){
        count = 1;
        break;
       }
       i++;
    }
    if( count==1) printf("String is NOT a Palindrome.\n");
    else printf("String is a Palindrome.\n");
    return 0;
}