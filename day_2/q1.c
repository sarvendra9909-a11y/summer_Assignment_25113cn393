#include <stdio.h>
int main ()
{
    int s=0,n,l,k;
    printf("Enter a no.\n");
    scanf("%d",&n);
    k = n;
    while (n>0)
    {
        l = n%10;
        s = s+l;
        n = n/10;
    }
    printf("The sum of digits of %d is %d.",k,s);
    
    return 0;
}