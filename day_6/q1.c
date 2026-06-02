// WAP TO CONVERT DECIMAL TO BINARY.
#include <stdio.h>
int main()
{
    int b[20], i=0 , n , j ;
    printf("Enter a Decimal value.\n") ;
    scanf("%d",&n);
     printf("Binary of Decimal value  %d is given below:\n ",n);
    while (n>0)
    {
        b[i] = n%2;
           n = n/2;
           i++;
    }
   
    for( j=i-1 ; j>=0 ; j--)
    {
        printf("%d ",b[j]);
    }
    
    return 0;
}