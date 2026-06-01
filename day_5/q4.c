// WAP TO PRINT LARGEST PRIME FACTOR OF A GIVEN NUMBER.
#include <stdio.h>
int main()
{
    int n , m , max_prime = -1 , i;
    printf("Enter a No. greater then 1 .\n");
    scanf("%d",&n);
    m = n;
    // Remove all factors of 2
    while ( n%2 == 0)
    {
        max_prime = 2;
        n = n/2;
    }
    // Check odd factors up to the square root of n.
    for( i = 3; i*i<=n;i+=2)
    {
        while ( n%i==0 )
        {
            max_prime = i;
            n = n/i;
        }
        
    } 
    // If n is still greater than 2, n itself must be prime.
    if( n>2 )
    {
        max_prime = n;
    }
     printf("Largest Prime factor of %d is %d.",m,max_prime);
        return 0;
}