// WAP TO SUBTRACT MATRICES.
#include <stdio.h>
int main()
{
    int a[10][10] , b[10][10] , c[10][10] , i , j , m , n , p , q ;
    printf("Enter row and column of matrix a.\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of matrix a.\n");
    for( i=0 ; i<m ; i++){
        for( j=0 ; j<n ; j++){
            scanf("%d",&a[i][j]);
        }
    }
     printf("Enter row and column of matrix b.\n");
    scanf("%d%d",&p,&q);
    printf("Enter the elements of matrix b.\n");
    for( i=0 ; i<p ; i++){
        for( j=0 ; j<q ; j++){
            scanf("%d",&b[i][j]);
        }
    }
    if( m==p && n==q)
    {
        printf("Subtraction of both matrix Possible.\n");
    }
    else printf("Subtraction of matrices is NOT Possible.\n");
    // ADDING TWO MATRICES.
    for( i=0 ; i<m ; i++){
        for( j=0 ; j<n ; j++){
            c[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("Matrix C on subracting matrix b from a .\n");
    for( i=0 ; i<m ; i++){
        for( j=0 ; j<n ; j++){
           printf(" %d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}