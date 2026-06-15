// WAP IN C TO MERGE ARRAY.
#include <stdio.h>
int main()
{
    int a[20] , b[20] , i , m , n ;
    printf("Enter the size of first array.\n");
    scanf("%d",&m);
    printf("Enter the elements of first array.\n");
    for( i=0 ; i<m ; i++){
        scanf("%d",&a[i]);
    }
     printf("Enter the size of second array.\n");
    scanf("%d",&n);
    printf("Enter the elements of second array.\n");
    for( i=0 ; i<n ; i++){
        scanf("%d",&b[i]);
    }
    // MERGING TWO ARRAYS.
    for( i=0 ; i<n ; i++){
        a[m+i] = b[i];
    }
    printf("Array after merging: \n");
    for( i=0 ; i<(m+n) ; i++){
        printf(" %d",a[i]);
    }
    return 0;
}