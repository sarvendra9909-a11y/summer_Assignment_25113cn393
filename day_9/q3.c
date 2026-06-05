// WAP TO PRINT REPEATED CHARACTER PATTERN .
// A
// B B
// C C C 
// D D D D
// E E E E E
#include <stdio.h>
int main()
{
    int n , i , j , a=1 , d ;
    printf("Enter no. of rows .\n");
    scanf("%d",&n);
    for( i=1 ; i<=n ; i++)
    {
        for( j=1 ; j<=i ; j++)
        {
            d = a+64;
            char ch = (char)d;
            printf("%c",ch);
        }
        a++;
        printf("\n");
    }
    return 0;
}