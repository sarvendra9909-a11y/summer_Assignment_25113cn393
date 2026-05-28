#include<stdio.h>
int main()
{
    int n,i,s=0;
    printf("Enter a natural no.\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s = s+i;
    }
    printf("The sum of natural no. upto %d is %d",n,s);
    return 0;
}