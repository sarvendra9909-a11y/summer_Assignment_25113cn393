// WAP TO FIND DIAGONAL SUM.
#include <stdio.h>
int main()
{
    int arr[10][10] , i , j , m , n ,sum ;
    printf("Enter the size of array .\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of array.\n");
     for( i=0 ; i<m ; i++){
        for( j=0 ; j<n ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // FINDING SUM OF DIAGONAL.
     for( i=0 ; i<m ; i++){
        for( j=0 ; j<n ; j++){
          if( i==j ){
            sum += arr[i][j];
          }
        }
    }
    printf("The sum of diagonal elements is %d .",sum);
    return 0 ;
}