// WAP TO LINEAR SEARCH .
#include <stdio.h>
int main()
{
    int arr[10] , n , i , a , c=0 ;
    printf("Enter the size of an array .\n");
    scanf("%d",&n);
    printf("Enter the elements of an array.\n");
    for( i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the searching element.\n");
    scanf("%d",&a);
    for( i=0 ; i<n ; i++)
    {
        if( arr[i]==a){
            c=1;
            break;
        }
    }
    if( c==1 )
    printf("Element is found at index %d .",i);
    else
    printf("Element is NOT found .");
    return 0;
}