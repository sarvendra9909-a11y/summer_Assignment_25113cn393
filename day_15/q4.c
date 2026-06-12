// WAP TO MOVE ALL ZEROES OF ARRAY AT THE END.
#include <stdio.h>
int main()
{
    int a[10] , i , j = -1 , n , temp ;
    printf("Enter the size of array.\n");
    scanf("%d",&n);
    printf("Enter the array elements .\n");
    for( i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    for( i=0 ; i<n ; i++){
        if( a[i] == 0){
            j = i;
            break;
        }
    }
    for( i = j+1 ; i<n ; i++){
        if( a[i] != 0){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j++;
        }
    }
    printf("Resulting array in which all zeroes are at the end : ");
    for( i=0 ; i<n ; i++){
        printf("%d ",a[i]);
    }
    return 0;
}