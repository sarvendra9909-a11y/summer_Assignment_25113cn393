// WAP TO COUNT WORDS IN A SENTENCE.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[40];
    puts("Enter a string.");
    gets(str);
    int i=0 , count = 1;
    while (str[i]!='\0')
    {
        if( str[i]==' '){
            count++;
        }
        i++;
    }
    printf("Total words in a sentence = %d",count);
    return 0;
}