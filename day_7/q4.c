// WAP TO RECURSIVE  SUM OF DIGITS.
#include <stdio.h>
int sum_of_digits(int n){
   int  l = n%10;
    if( n== 0)
    {
        return l;
    }
    return (l + sum_of_digits(n/10));
}

int main()
{
    int n , result ;
    printf("Enter a no.\n");
    scanf("%d",&n);
    result = sum_of_digits(n);
    printf("Sum of digits in %d is %d .",n,result);
    return 0;
}