// WAP TO PRINT CHARACTER TRIANGLE .
// A
// A B
// A B C 
// A B C D 
// A B C D E 
#include <stdio.h>
int main()
{
    int n , i , j , a , d ;
    printf("Enter No. of rows .\n");
    scanf("%d",&n);
    for( i=1 ; i<=n ; i++)
    { 
         a = 1;
        for( j=1 ; j<=i ; j++)
        {
            d = a + 64;
            char ch = (char)d;
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}