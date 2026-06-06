// WAP TO WRITE FUNCTION TO FIND FACTORIAL.
#include <stdio.h>
int fact( int n)
{
    int i , fact =1;
    for( i=1 ; i<=n ; i++)
    {
        fact = fact*i;
    }
    return fact;
}

int main()
{
   int n , factorial ;
   printf("Enter a no.\n");
   scanf("%d",&n); 
   factorial = fact( n );
   printf("Factorial of %d is %d.",n,factorial);
   return 0;

}
    
