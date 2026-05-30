#include <stdio.h>
int main()
{
    int c = 0,n,i;
    printf("Enter a Positive no.\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c = 1;
            break;
        }
    }
    if(n==1)
    printf("1 is Neither Prime NOR Composite.");
    else if(c==1)
    printf("%d is NOT a Prime no.",n);
    else if(c==0)
    printf("%d is PRIME no.",n);
    return 0;
}