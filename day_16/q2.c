// WAP TO FIND PAIR WITH GIVEN SUM.
#include <stdio.h>
int main()
{
    int sum=0 , arr[20] , n , i , j ;
    printf("Enter the size of array.\n");
    scanf("%d",&n);
    printf("Enter the elements of array.\n");
    for( i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    printf("Input the value of sum.\n");
    scanf("%d",&sum);
    printf("Pairs having sum = %d\n" ,sum);
    for( i=0 ; i<n ; i++){
        for( j=i+1 ; j<n ; j++){
            if( (arr[i] + arr[j]) == sum )
            {
                printf("( %d,%d ) ",arr[i],arr[j]);
            }
        }
    }
    return 0;
}