#include <stdio.h>
int main ()
{
    int rev = 0,n,k,l;
    printf("Enter a no.\n");
    scanf("%d",&n);
    k = n;
    while (n>0)
    {
        l = n%10;
        rev = rev*10 + l;
        n = n/10;
    }
    printf("The Reverse of %d is %d.",k,rev);

    return 0;
}