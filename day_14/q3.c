// WAP TO FIND SECOND LARGEST ELEMENT IN AN ARRAY.
#include <stdio.h>
#include <limits.h>
int main()
{ 
    int max = INT_MIN , smax , n , arr[10] , i ;
    printf("Enter the size of an array.\n");
    scanf("%d",&n);
    printf("Enter the elements of an array.\n");
    for( i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    for( i=0 ; i<n ; i++){
        if( max < arr[i]){
            smax = max;
           max = arr[i];
        }
        else if ( smax < arr[i] && max!=arr[i]){
            smax = arr[i];
        }
    }
    printf("Second largest element of given array is %d .",smax);
    return 0;
}