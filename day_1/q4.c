#include<stdio.h>
int main()
{
    int c=0,n,k;
    printf("Enter a no.\n");
    scanf("%d",&n);
    k = n;
    while (n>0)
    {
        n = n/10;
        c++;
    }
    printf("No of digits in %d is %d.",k,c);
    return 0;
}