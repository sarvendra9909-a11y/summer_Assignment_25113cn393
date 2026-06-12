// WAP TO ROTATE ARRAY LEFT.
#include <stdio.h>

void reverse( int a[],int si , int ei){
   for(int i=si , j=ei  ; i<j ; i++ , j--)    {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
   }
    return ;
}
int main()
{
    int k , n , i , j , a[10];
    printf("Enter the size of array.\n");
    scanf("%d",&n);
    printf("Enter the array elements .\n");
    for( i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter value by which you have to rotate array right.\n");
    scanf("%d",&k);
    k = k%n;
    reverse( a , 0 , n-1);
    reverse( a , 0 , k );
    reverse( a , k+1 , n-1);
    printf("Array after rotating right by %d steps : ",k);
    for( i=0 ; i<n ; i++){
        printf("%d ",a[i]);
    }
    return 0;
}