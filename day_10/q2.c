// WAP TO PRINT REVERSE PYRAMID .
//  * * * * * * * * *
//    * * * * * * *
//      * * * * * 
//        * * * 
//          *
#include <stdio.h>
int main()
{
    int n, i , j , k  ;
    printf("Enter No. of rows .\n");
    scanf("%d",&n);
    int  nsp=0 ,  nst = (2*n-1);
    for( i=1 ; i<=n ;i++)
    {
        for( j=1 ; j<=nsp ; j++)
        {
            printf(" ");
        }
        nsp++;
        for( k=1 ; k<=nst ; k++)
        {
            printf("*");
        }
        nst-=2;
        printf("\n");
    }
    return 0;
}

 