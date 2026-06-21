// WAP TO FIND FIRST REPEATING CHARACTER.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[40] , ch ;
    printf("Enter a string : ");
    gets(str);
    int i=0 , j , count ;
    while (str[i]!='\0')
    { 
        count = 1;
        j = 0;
        while (str[j]!='\0')
        {
            if( str[i]==str[j] && i!=j){
                count++;
            }
            j++;
        }
        
        if( count==1) {
            ch = str[i];
            break;
        }
        i++;
    }
     printf("First non-repeating character is %c .",ch);
    return 0;
}