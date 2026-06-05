// WAP TO PRINT NUMBER PYRAMID .
//                1
//              1 2 1
//            1 2 3 2 1 
//          1 2 3 4 3 2 1 
//        1 2 3 4 5 4 3 2 1 
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
            printf("%d",k);
        }
        int a = i-1;
        for( l=1 ; l<=(i-1) ; l++)
        {
            printf("%d",a);
            a--;
        }
        printf("\n");
    }

    return 0;
}