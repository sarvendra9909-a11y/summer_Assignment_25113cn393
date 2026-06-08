// WAP TO FIND LARGEST AND SMALLEST ELEMENT OF AN ARRAY.
#include <stdio.h>
#include <limits.h>
int main()
{
   int n , a[10] , max , min ,i ;
   printf("Input the size of array.\n");
   scanf("%d",&n);
   printf("Input the elements of an array.\n");
   for( i=0 ; i<n ; i++){
    scanf("%d",&a[i]);
   }
   max = INT_MIN;
   min = INT_MAX;
    // FINDING LARGEST ELEMENT.
   for( i=0 ; i<n ; i++){
    if( max<a[i] )
    {
      max = a[i];
    }
   }
    printf("Largest element of array is %d .\n",max);
    // FINDING SMALLEST ELEMENT.
     for( i=0 ; i<n ; i++){
    if( min>a[i] )
    {
      min = a[i];
    }
   }
    printf("Smallest element of array is %d .",min);

    return 0;
}