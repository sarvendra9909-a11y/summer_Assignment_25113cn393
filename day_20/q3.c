// WAP TO FIND ROW WISE SUM.
#include <stdio.h>
int main()
{
    int a[10][10] , m , n , sum=0 , i , j ;
    printf("Enter order  of matrix.\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of matrix.\n");
    for( i= 0 ; i<m ; i++){
        for( j=0 ; j<n ; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for( i= 0 ; i<m ; i++){
        sum = 0;
        for( j=0 ; j<n ; j++){
          sum += a[i][j];
        }
        printf("Sum of row %d is %d .\n",(i+1),sum);
    }
    
    return 0;
}