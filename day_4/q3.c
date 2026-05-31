#include <stdio.h>
#include <math.h>
int main()
{
    int m , n , k , l , c=0 , s=0;
    printf("Enter a No.\n");
    scanf("%d",&n);
    k = n;
    m = n;
     // Counting the digits of a given no.
    while (n>0)
    {
        n = n/10;
        c++;
    }
    printf("\nNo. of digits in %d is %d.\n",k,c);

    // Calculating the sum of individual digits raised to the power count.
    while (k>0)
    {
        l = k%10;
        s = s + round(pow(l,c));
        k = k/10;
    }
    printf("The sum of individual digits raised to the pow. count is %d .\n",s);

    // Checking if sum of individiuals digits raised to the pow c  is equal to original no.

 if( s == m)
 printf("\n%d is an Armstrong No.",m);
 else
 printf("\n%d is NOT an Armstrong No.",m);

    return 0;
}