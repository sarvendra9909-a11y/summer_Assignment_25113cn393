// WAP TO FIND MISSING NUMBER IN ARRAY IN GIVEN RANGE 1 TO 10  .
#include <stdio.h>
int main()
{
    int arr[20] , n , sum1=0 , sum2=0 , x ; 
    printf("Enter the size of array.\n");
    scanf("%d",&n);
    sum1 = 10*(10+1)/2;
    printf("Enter the array elements .\n");
    for( int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    for( int i=0 ; i<n ; i++){
        sum2 = sum2 + arr[i];
    }
    x = sum1 - sum2;
    printf("Missing element is %d .",x);
    return 0;
}