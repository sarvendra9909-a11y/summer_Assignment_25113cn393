// WAP TO INPUT AND DISPLAY ARRAY .
#include <stdio.h>
int main()
{
    int n , a[10] ,i ;
    printf("Input the size of array .\n");
    scanf("%d",&n);
    printf("Input the elements of array .\n");
    for ( i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements of an array are : ");
    for( i=0 ; i<n ; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}