// WAP TO CHECK SYMMETRIC MATRIX.
#include <stdio.h>
int main()
{
    int arr[10][10] ,b[10][10] , i , j , m , n , temp , count=0 ;
    printf("Enter the size of array .\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of array.\n");
     for( i=0 ; i<m ; i++){
        for( j=0 ; j<n ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // TO COPY ORIGINAL MATRIX FOR COMPARING.
     for( i=0 ; i<m ; i++){
        for( j=0 ; j<n ; j++){
           b[i][j] = arr[i][j];
        }
    }
    printf("Original matrix.\n");
     for( i=0 ; i<m ; i++){
        for( j=0 ; j<n ; j++){
         printf(" %d",b[i][j]);
        }
        printf("\n");
    }
    // FINDING THE TRANSPOSE.
      for( i=0 ; i<m ; i++){
        for( j=i ; j<n ; j++){
                temp = arr[i][j];
           arr[i][j] = arr[j][i];
           arr[j][i] = temp;
        }
    }
    printf("Transpose of matrix:\n");
    for( i=0 ; i<m ; i++){
        for( j=0 ; j<n ; j++){
           printf(" %d",arr[i][j]);
        }
        printf("\n");
    }
    // CHECKING FOR SYMMETRIC.
     for( i=0 ; i<m ; i++){
        for( j=0 ; j<n ; j++){
           if( b[i][j] == arr[i][j]){
            continue;
           }
           else {
           count = 1;
            break;
           }
        }
    }
    if( count == 1) printf("NOT SYMMETRIC.\n");
    else printf("SYMMETRIC.\n");
    return 0;
}