#include <stdio.h>
int main ()
{
    int p = 1,n,k,l;
    printf("Enter a no.\n");
    scanf("%d",&n);
    k = n;
    while (n>0)
    {
       l = n%10;
       p = p*l;
       n = n/10;
    }
    printf("The Product of digits of %d is %d.",k,p);
    
    return 0;
}