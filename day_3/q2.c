#include <stdio.h>
int main()
{
    int c,n,i,j;
    printf("Enter a Positive no.\n");
    scanf("%d",&n);
    printf("Range of Prime no upto %d is given below.\n",n);
    for(i=2;i<=n;i++)
    {
        c = 1; //assume the current no i is prime.
        for(j=2;j<=i/2;j++)
        {
        if(i%j==0)
        {
            c = 0;
          break;
        }
    }
        if(c == 1)
        {
        printf("%d ",i);
        }
        
    }
    return 0;
}