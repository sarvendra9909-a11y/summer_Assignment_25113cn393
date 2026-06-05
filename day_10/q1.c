// WAP TO PRINT STAR PYRAMID .
//            *
//          * * *
//        * * * * *
//      * * * * * * * 
//    * * * * * * * * *
#include <stdio.h>
int main()
{
    int n, nst = 1 , i , j , k  ;
    printf("Enter No. of rows .\n");
    scanf("%d",&n);
    int  nsp=(n-1);
    for( i=1 ; i<=n ;i++)
    {
        for( j=1 ; j<=nsp ; j++)
        {
            printf(" ");
        }
        nsp--;
        for( k=1 ; k<=nst ; k++)
        {
            printf("*");
        }
        nst+=2;
        printf("\n");
    }
    return 0;
}