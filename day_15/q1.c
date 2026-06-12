// WAP TO REVERSE ARRAY .
#include <stdio.h>
int main()
{
    int arr[10] , n , i , j , temp ;
    printf("Enter the size of array.\n");
    scanf("%d",&n);
    printf("Enter the elements of array.\n");
    for( i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    i=0 , j=(n-1) ;
    while (i<j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    printf("Reverse array is : ");
    for( i=0 ; i<n ; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}