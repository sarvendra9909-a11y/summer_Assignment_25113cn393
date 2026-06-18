// WAP TO FIND COLUMN WISE SUM.
#include <stdio.h>
int main()
{
    int a[10][10] , m , n , i , j , k ;
    printf("Enter order  of matrix.\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of matrix.\n");
    for( i= 0 ; i<m ; i++){
        for( j=0 ; j<n ; j++){
            scanf("%d",&a[i][j]);
        }
    }
     for (j = 0; j<n; j++) {
        int col_sum = 0; // Reset sum for each new column
        for (i = 0; i<m ; i++) {
            col_sum +=a[i][j];
        }
        printf("Sum of Column %d = %d\n", j+1, col_sum);
    }
    
    return 0;
}