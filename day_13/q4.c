// WAP TO COUNT EVEN AND ODD ELEMENTS.
#include <stdio.h>
int main()
{
    int n , a[10] , i , c1=0 , c2=0 ;
    printf("Input the size of array.\n");
    scanf("%d",&n);
    printf("Input the elements of array .\n");
    for( i=0 ; i<n ; i++){
       scanf("%d",&a[i]);
    }
    // COUNTING EVEN ELEMENTS.
    for(i=0 ; i<n ; i++){
        if( a[i]%2 == 0 )
        {
            c1++;
        }
    }
    printf("Total no of EVEN elements are %d .\n",c1);
    // COUNTING ODD ELEMENTS.
    for(i=0 ; i<n ; i++){
        if( a[i]%2 != 0 )
        {
            c2++;
        }
    }
    printf("Total no of ODD elements are %d .\n",c2);
    return 0;
}