// WAP TO TRANSPOSE OF MATRIX.
#include <stdio.h>
int main()
{
    int arr[10][10] , i , j , m , n , temp ;
    printf("Enter the size of array .\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of array.\n");
     for( i=0 ; i<m ; i++){
        for( j=0 ; j<n ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // FINDING THE TRANSPOSE.
      for( i=0 ; i<m ; i++){
        for( j=i ; j<n ; j++){
                temp = arr[i][j];
           arr[i][j] = arr[j][i];
           arr[j][i] = temp;
        }
    }
    printf("Transpose of matrix is given below.\n");
     for( i=0 ; i<m ; i++){
        for( j=0 ; j<n ; j++){
           printf(" %d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}