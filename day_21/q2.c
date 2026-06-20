// WAP TO REVERSE A STRING .
#include <stdio.h>
#include <string.h>
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
    printf("Length of string is : %d\n",length);
    for( int i=0 , j=length-1 ; i<j ; i++ , j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
   printf("Reverse string is : %s",str);
    return 0;
}