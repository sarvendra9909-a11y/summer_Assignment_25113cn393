// WAP TO WRITE A FUNCTION FOR PALINDROME .
#include <stdio.h>
void palindrome( int n)
{
      int rev = 0,l,k;
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
    
    return ;
}
int main()
{
    int n ;
    printf("Enter a No.\n");
    scanf("%d",&n);
    palindrome( n );
    return 0;
}