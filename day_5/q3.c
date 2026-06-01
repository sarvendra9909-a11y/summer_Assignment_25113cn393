// WAP TO PRINT FACTORS OF A GIVEN NUMBER.
#include <stdio.h>
int main()
{
    int n , i ;
    printf("Enter a No.\n");
    scanf("%d",&n);
    printf("Factors of %d are given below:\n",n);
    for( i = 1; i<=n; i++)
    {
        if( n%i == 0)
        {
            printf("%d ",i);
        }
    }

    return 0;
} 