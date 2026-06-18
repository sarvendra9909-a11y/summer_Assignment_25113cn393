// WAP TO MULTIPLY TWO MATRICES.
#include <stdio.h>
int main()
{
    int a[10][10] , b[10][10] , c[10][10] , i , j , k , m , n , p , q ;
    printf("Enter the order of matrix a .\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of matrix a.\n");
    for( i=0 ; i<m ; i++){
        for( j=0 ; j<n ; j++){
            scanf("%d",&a[i][j]);
        }
    }
     printf("Enter the order of matrix b .\n");
    scanf("%d%d",&p,&q);
    printf("Enter the elements of matrix b.\n");
    for( i=0 ; i<p ; i++){
        for( j=0 ; j<q ; j++){
            scanf("%d",&b[i][j]);
        }
    }
    if( n==p )
    {
         printf("Multiplication of matrices is valid.\n");
          // MULTIPLYING MATRICES.
    printf("Resultant matrix:\n");
    for( i=0 ; i<m ; i++){
        for( j=0 ; j<q ; j++){
          c[i][j] = 0 ;
          for( k=0 ; k<n ; k++){
            c[i][j] += a[i][k] * b[k][j];
          }
        }
    }
     // PRINTING MATRICES.
     for( i=0 ; i<m ; i++){
        for( j=0 ; j<q ; j++){
           printf(" %d ",c[i][j]);
        }
        printf("\n");
    }
    }
    else printf("Multiplication is NOT valid.\n");
   

    return 0;
}