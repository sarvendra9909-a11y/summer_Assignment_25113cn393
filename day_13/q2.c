// WAP TO FIND SUM AND AVERAGE OF ARRAY.
#include <stdio.h>
int main()
{
    int n , a[10] , i , sum = 0  ;
    printf("Input the size of array .\n");
    scanf("%d",&n);
    printf("Input the array elements .\n");
    for( i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }
    for(i=0 ; i<n ; i++){
        sum = sum + a[i];
    }
    printf("The sum of all the elements of an array is %d .\n",sum);
    float avg  = ( float )sum/n ;
    printf("The AVG of all the elements of an array is %f",avg);
    return 0;
}