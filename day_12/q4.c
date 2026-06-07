// WAP TO WRITE FUNCTION FOR PERFECT NUMBER .
#include <stdio.h>
void if_perfect( int n )
{
     int  i ,sum = 0;
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
    return ;

}
int main()
{
    int n ;
    printf("Enter a No.\n");
    scanf("%d",&n);
    if_perfect( n );
    return 0;
}