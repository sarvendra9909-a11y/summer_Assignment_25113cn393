// WAP TO FREQUENCY OF AN ELEMENT.
#include <stdio.h>
int main()
{
    int arr[10], n , a , i , c=0 ;
    printf("Enter the size of an array.\n");
    scanf("%d",&n);
    printf("Enter the elements of an array.\n");
    for( i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element of an array whose frequency is to be determined.\n");
    scanf("%d",&a);
    for( i=0 ; i<n ; i++){
        if( arr[i]==a){
            c++;
        }
    }
    printf("Frequency of element %d in given array is %d.",a , c);
    return 0;
     
}