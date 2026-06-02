// WAP TO CONVERT BINARY TO DECIMAL.
#include <stdio.h>
int main()
{
    int n , m , i = 1 , sum = 0 , l ;
    printf("Enter a Binary No.\n");
    scanf("%d",&n);
    m = n;
    while (n>0)
    {
        l = n%10;
        sum = sum + (l*i);
        i = i*2;
        n = n/10;
    }

    printf("The Decimal value of Binary %d is %d .",m,sum);
    
    return 0;
}