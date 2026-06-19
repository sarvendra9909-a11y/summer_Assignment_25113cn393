// WAP TO COUNT VOWELS AND CONSONANTS.
#include <stdio.h>
#include <strings.h>
int main()
{
    char str[40];
    int vowels=0 , consonants=0;
    puts("Enter a string .");
    gets(str);
    for( int i=0 ; str[i]!='\0' ; i++){
       if( str[i]>='a' && str[i]<='z') {
        if( str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'){
           vowels++;
        }
        else consonants++;
       }
    }
    printf("Vowels = %d and Consonants = %d.",vowels,consonants);
    return 0;
}