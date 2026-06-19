
#include <stdio.h>
int main()
{
    int i,n,a = 0,b = 1,s = 0;
    printf("Enter the term of fibonacci series: \n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {    if(i<=1)
        {
            s = i; //First two terms.
        } 
        else
         {s = a+b;
          a = b;
          b = s;
         }
         
        }
       printf("The %dth term of Fibonacci series is %d.\n",n,s);
    return 0;
}