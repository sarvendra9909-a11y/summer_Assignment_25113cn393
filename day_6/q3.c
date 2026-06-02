// WAP TO COUNT SET BITS IN  A NUMBER.
#include <stdio.h>
int main()
{
    int n , m , count = 0, l ;
    printf("Enter a Binary No.\n");
    scanf("%d",&n);
    m = n;
    while (n!=0)
    {
        l = n%10;
        if( l == 1)
        {
            count++;
        }
        n = n/10;
    }
    printf("No. of set bits in %d is %d .",m,count);
    
    return 0;
}