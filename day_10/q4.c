// WAP TO PRINT CHARACTER PYRAMID .
//            A
//          A B A
//        A B C B A 
//      A B C D C B A 
//    A B C D E D C B A 
 
#include <stdio.h>
int main()
{
    int n , i , j , k , l;
    printf("Enter no. of rows .\n");
    scanf("%d",&n);
    int nsp = n-1;
    for( i=1 ; i<=n ; i++)
    {
        for( j=1 ; j<=nsp ; j++)
        {
            printf(" ");
        }
        nsp--;
        for( k=1 ; k<=i ; k++)
        {
            char ch = (char)(k+64);
            printf("%c",ch);
        }
        int a = i-1;
        for( l=1 ; l<=(i-1) ; l++)
        {
            char ch = (char)(a+64);
            printf("%c",ch);
            a--;
        }
        printf("\n");
    }

    return 0;
}