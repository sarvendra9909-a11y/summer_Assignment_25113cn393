#include <stdio.h>
int main ()
{
    int i,n,s=0;
    printf("Enter a natural no.\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s = s + i;
    }
    printf("The sum of Natural no. upto %d is %d.",n,s);

    return 0;
}