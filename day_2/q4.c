#include <stdio.h>
int main()
{
    int rev = 0,l,n,k;
    printf("Enter a no.\n");
    scanf("%d",&n);
    k = n;
    while (n>0)
    {
        l = n%10;
        rev = rev * 10 + l;
        n = n/10;
    }
    if (rev == k)
    printf("The no. %d is a Palindrome.",k);
    else
    printf("The no. %d is NOT a Palindrome.",k);
    
    return 0;
}