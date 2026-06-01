// WAP TO CHECK PERFECT NUMBER.
#include <stdio.h>
int main()
{
    int n , i ,sum = 0;
    printf("Enter a No.\n");
    scanf("%d",&n);
    for( i = 1; i<=(n/2);i++)
    {
        if( n%i == 0)
        {
            sum = sum + i;
        }
    }
    // CHECKING FOR A PERFECT NO.
    if( sum == n)
    printf("%d is an Perfect No.",n);
    else
    printf("%d is NOT an Perfect No.",n);
    return 0;
}